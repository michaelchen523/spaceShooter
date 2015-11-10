#include "mylib.h"
#include "text.h"


void drawChar4(int row, int col, char ch, unsigned char index)
{
    int r,c;
    for(r=0; r<8; r++)
    {
        for(c=0; c<6; c++)
        {
            if(fontdata_6x8[OFFSET(r, c, 6) + ch*48])
            {
                setPixel4(row+r, col+c, index);
            }
        }
    }
}

void drawString4(int row, int col, char *str, unsigned char index)
{
    while(*str)
    {
        drawChar4(row, col, *str++, index);
        col += 6;
    }
    
}
