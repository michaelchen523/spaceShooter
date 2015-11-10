#include <stdlib.h>
#include "mylib.h"

u16* videoBuffer = (u16*) 0x6000000;

void setPixel4(int r, int c, u8 index) {
    int pixel = OFFSET(r, c, 240);
    int _short = pixel/2;
    if(c & 1) {
        videoBuffer[_short] = (videoBuffer[_short] & 0x00FF) | (index << 8);
    } else {
        videoBuffer[_short] = (videoBuffer[_short] & 0xFF00) | (index);
    }
}


void drawImage4(int r, int c, int width, int height, const u16* image)
{
    u16 i;
    for(i = 0; i < height; i++) {
       DMA[3].src =  (volatile unsigned short *) (image + (width * i)/2);
       DMA[3].dst =  (volatile unsigned short *) (videoBuffer + OFFSET(r + i, c, 240)/2);
       DMA[3].cnt = (width/2) | DMA_ON;
    }
}

void draw_image_portion(int destination_row, int destination_col, int source_row, int source_col, int source_width, int source_height, const u16* image, int image_width)
{
    for (u16 i = 0; i < source_height; i++) {
        DMA[3].src = ((image + image_width * source_row + source_col) + (image_width * i)/2);
        DMA[3].dst = (videoBuffer + OFFSET(destination_row + i, destination_col, 240)/2);
        DMA[3].cnt = (source_width/2) | DMA_ON;
    }

}



void loadPalette4(const unsigned short *pal)
{
    DMA[3].src = pal;
    DMA[3].dst = PALETTE;
    DMA[3].cnt = 256 | DMA_ON;
}

void fillScreen4(unsigned char index)
{
	volatile unsigned short color = index | (index << 8);
	DMA[3].src = &color;
	DMA[3].dst = videoBuffer;
	DMA[3].cnt = 19200 | DMA_SOURCE_FIXED | DMA_ON;
}

void drawRect4(int row, int col, int height, int width, unsigned char index)
{
	volatile unsigned short color = index | (index<<8);
	int r;
	for(r=0; r<height; r++)
	{
		DMA[3].src = &color;
		DMA[3].dst = &videoBuffer[OFFSET(row+r, col, 240)/2];
		DMA[3].cnt = (width/2) | DMA_SOURCE_FIXED | DMA_ON; 
	}
}
void waitForVBlank()
{
    while(SCANLINECOUNTER > 160);
    while(SCANLINECOUNTER < 160);
}

void FlipPage()
{
    if(REG_DISPCTL & BUFFER1FLAG) {
        
        REG_DISPCTL = REG_DISPCTL & ~BUFFER1FLAG;
        videoBuffer = BUFFER1;
    } else {
        
        REG_DISPCTL = REG_DISPCTL | BUFFER1FLAG;
        videoBuffer = BUFFER0;
    }
} 
