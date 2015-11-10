typedef unsigned char u8;
typedef unsigned short u16;

#define REG_DISPCTL *(unsigned short *) 0x4000000
#define MODE3 3
#define MODE4 4
#define BUFFER0 (unsigned short *) 0x6000000
#define BUFFER1 (unsigned short *) 0x600A000
#define BUFFER1FLAG (1 << 4)

#define PALETTE ((unsigned short *)0x5000000)

#define BG2_ENABLE (1 << 10)
#define OFFSET(r,c, numCols) ((r) * (numCols) + (c))
#define SCANLINECOUNTER *(volatile unsigned short *)0x4000006

extern unsigned short *videoBuffer;

/*    Colors    */
#define RGB(r,g,b) ((r) | (g << 5) | (b << 10))
#define RED RGB(31,0,0)
#define GREEN RGB(0, 31, 0)
#define BLUE RGB(0, 0, 31)
#define CYAN RGB(0, 31, 31)
#define MAGENTA RGB(31, 0, 31)
#define YELLOW RGB(31, 31, 0)
#define WHITE RGB(31, 31, 31)
#define BLACK RGB(0, 0, 0)
#define GRAY RGB(24,24,24)
#define LTGRAY RGB(20, 20, 20);


/*   Buttons   */
#define KEY_A (1 << 0)
#define KEY_B (1 << 1)
#define KEY_SELECT (1 << 2)
#define KEY_START (1 << 3)
#define KEY_RIGHT (1 << 4)
#define KEY_LEFT (1 << 5)
#define KEY_UP (1 << 6)
#define KEY_DOWN (1 << 7)
#define KEY_R (1 << 8)
#define KEY_L (1 << 9)

#define BUTTONS *(volatile unsigned int *)0x4000130
#define KEY_DOWN_NOW(key) (~(BUTTONS) & key)


/* DMA */

typedef struct 
{
    const volatile void *src;
    const volatile void *dst;
    unsigned int cnt;
} DMA_CONTROLLER;


typedef struct
{
    int row;
    int col;
    int oldrow;
    int oldcol;
} SHIP;

typedef struct
{
    int row;
    int col;
    int isHit;
} BULLET;

typedef struct
{
    int row;
    int col;
    int lives;
    int isDown;
    int bullet1row;
    int bullet1col;
    int bullet1isHit;
    int bullet1Exists;
} ENEMY;

/* Prototypes */
void drawImage4(int r, int c, int width, int height, const u16* image);
void setPixel4(int r, int c, u8 index);
void FlipPage();
void loadPalette4(const unsigned short *pal);
void waitForVBlank();
void fillScreen4(unsigned char index);
void drawRect4(int row, int col, int height, int width, unsigned char index);




#define DMA ((volatile DMA_CONTROLLER *) 0x040000B0)


#define DMA_SOURCE_FIXED (2 << 23)
#define DMA_ON (1 << 31)
