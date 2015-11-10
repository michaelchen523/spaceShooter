/*
 * Exported with nin10kit v1.1
 * Invocation command was nin10kit -mode4 images galagaShip.jpg enemyShip.jpg explosion1.jpg explosion2.jpg explosion3.jpg explosion4.jpg 
 * Time-stamp: Monday 11/09/2015, 16:58:17
 * 
 * Image Information
 * -----------------
 * galagaShip.jpg 40@40
 * enemyShip.jpg 30@30
 * explosion1.jpg 30@34
 * explosion2.jpg 32@33
 * explosion3.jpg 34@32
 * explosion4.jpg 36@36
 * 
 * Quote/Fortune of the Day!
 * -------------------------
 * 
 * All bug reports / feature requests are to be sent to Brandon (bwhitehead0308@gmail.com)
 */

#ifndef IMAGES_H
#define IMAGES_H

extern const unsigned short images_palette[255];
#define IMAGES_PALETTE_SIZE 255

extern const unsigned short galagaShip[800];
#define GALAGASHIP_SIZE 800
#define GALAGASHIP_WIDTH 40
#define GALAGASHIP_HEIGHT 40

extern const unsigned short enemyShip[450];
#define ENEMYSHIP_SIZE 450
#define ENEMYSHIP_WIDTH 30
#define ENEMYSHIP_HEIGHT 30

extern const unsigned short explosion1[510];
#define EXPLOSION1_SIZE 510
#define EXPLOSION1_WIDTH 30
#define EXPLOSION1_HEIGHT 34

extern const unsigned short explosion2[528];
#define EXPLOSION2_SIZE 528
#define EXPLOSION2_WIDTH 32
#define EXPLOSION2_HEIGHT 33

extern const unsigned short explosion3[544];
#define EXPLOSION3_SIZE 544
#define EXPLOSION3_WIDTH 34
#define EXPLOSION3_HEIGHT 32

extern const unsigned short explosion4[648];
#define EXPLOSION4_SIZE 648
#define EXPLOSION4_WIDTH 36
#define EXPLOSION4_HEIGHT 36

#endif

