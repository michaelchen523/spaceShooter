#include <stdlib.h>
#include <stdio.h>
#include "mylib.h"
#include "text.h"
#include "opening.h"
#include "gameOver.h"
#include "images.h"


void win();
void game();
void lose();

enum {REDIDX, GREENIDX, BLUEIDX, CYANIDX, MAGENTAIDX, YELLOWIDX, WHITEIDX, LTGRAYIDX, BLACKIDX};


int main()
{
    REG_DISPCTL = MODE4 | BG2_ENABLE;
    loadPalette4(opening_palette);
    while(!KEY_DOWN_NOW(KEY_START)) {
        drawImage4(0, 0, OPENING_WIDTH, OPENING_HEIGHT, opening);
        if(KEY_DOWN_NOW(KEY_SELECT)) {
            main();
        }
        waitForVBlank();
        FlipPage();
    }
    game();
    return 1;
}
int score = 1;

void game() {
    loadPalette4(images_palette);
    int bulletExists = 0;
    int countScore = 3025; 
    int lives = 3;
    u16 colors[] = {RED, GREEN, BLUE, CYAN, MAGENTA, YELLOW, WHITE};
    int numcolors = sizeof(colors)/sizeof(colors[0]);
    int j;
    for(j = 0; j < numcolors; j++) {
        PALETTE[j] = colors[j];
    }
    PALETTE[j] = LTGRAY;
    PALETTE[j + 1] = BLACK;

    SHIP player;
    player.row = 70;
    player.col = 5;
    player.oldrow = player.row;
    player.oldcol = player.col;

    BULLET bullet;
    bullet.row = player.row + 16;
    bullet.col = player.col + 40;
    bullet.isHit = 0;

    ENEMY enemy;
    enemy.row = 70;
    enemy.col = 210;
    enemy.lives = 5;
    enemy.isDown = 1;
    enemy.bullet1row = enemy.row;
    enemy.bullet1col = enemy.col;
    enemy.bullet1isHit = 0;
    enemy.bullet1Exists = 0;

    

    while(1) {

        if(score <= 0 || lives == 0) {
            int loseCount = 500;
            while(loseCount-- > 0) {
                 drawImage4(player.row + 8, player.col + 10, EXPLOSION1_WIDTH, EXPLOSION1_HEIGHT, explosion1);
                 FlipPage();
            }
            loseCount = 500;
            while(loseCount-- > 0) {
                 drawImage4(player.row + 8, player.col + 10, EXPLOSION2_WIDTH, EXPLOSION2_HEIGHT, explosion2);
                 FlipPage();
            }
            loseCount = 500;
            while(loseCount-- > 0) {
                 drawImage4(player.row + 8, player.col + 10, EXPLOSION3_WIDTH, EXPLOSION3_HEIGHT, explosion3);
                 FlipPage();
            }

            loseCount = 500;
            while(loseCount-- > 0) {
                 drawImage4(player.row + 8, player.col + 10, EXPLOSION4_WIDTH, EXPLOSION4_HEIGHT, explosion4);
                 FlipPage();
            }
            lose();
        }
        if(enemy.lives < 1) {
            win();
        }
 
        if(KEY_DOWN_NOW(KEY_SELECT)) {
            main();
        }
        
        if(KEY_DOWN_NOW(KEY_UP)) {
            if(player.row <= 15) {
                player.row++;
            } else {
                player.row = player.row - 2;
            }
        }
        if(KEY_DOWN_NOW(KEY_RIGHT)) {
            if(player.col + 40 >= 240) {
                player.col--;
            } else {
                player.col = player.col + 2;
            }
        }

        if(KEY_DOWN_NOW(KEY_DOWN)) {
            if(player.row + 40 >= 160) {
                player.row--;
            } else {
                player.row = player.row + 2;
            }
        }

        if(KEY_DOWN_NOW(KEY_LEFT)) { 
            if(player.col <= 0) {
                player.col++;
            } else {
                player.col = player.col - 2;
            }
        }
  
        char scoreText[41] = "Score:";
        char livesText[41] = "Lives:";
        char enemyLivesText[41] = "Enemy Lives:";
        fillScreen4(WHITEIDX);
        drawImage4(player.row, player.col, GALAGASHIP_WIDTH, GALAGASHIP_HEIGHT, galagaShip);
        
        int speed = rand()%8;
        if(enemy.isDown == 1) {
            drawImage4(enemy.row, enemy.col, ENEMYSHIP_WIDTH, ENEMYSHIP_HEIGHT, enemyShip);
            enemy.row = enemy.row + speed;
        }
        if(enemy.isDown == 0) {
            drawImage4(enemy.row, enemy.col, ENEMYSHIP_WIDTH, ENEMYSHIP_HEIGHT, enemyShip);
            enemy.row = enemy.row - speed;
        }
        int lowBound = rand()%15;
        lowBound = lowBound + 120;
        if(enemy.row + 10 > lowBound && enemy.isDown == 1) {
            enemy.isDown = 0;
        }
        
        int topBound = rand()%15;
        topBound = topBound + 16;
        if(enemy.row < topBound && enemy.isDown == 0) {
            enemy.isDown = 1;
        }

        if(enemy.bullet1col <= (player.col + 40) && enemy.bullet1row >= player.row && enemy.bullet1row <= (player.row + 40) && enemy.bullet1isHit == 0 && enemy.bullet1Exists == 1) {
            lives--; 
            enemy.bullet1isHit = 1;
        }

        if(enemy.bullet1Exists == 0) {
            enemy.bullet1row = enemy.row + 16;
            enemy.bullet1col = enemy.col;
            enemy.bullet1Exists = 1;            
        }
        if(enemy.bullet1Exists == 1) {
            if(enemy.bullet1isHit == 0) {
                enemy.bullet1col = enemy.bullet1col - 5;
                drawRect4(enemy.bullet1row, enemy.bullet1col, 7,7, BLUEIDX);
            } else {
                enemy.bullet1Exists = 0;
                enemy.bullet1isHit = 0;
            } 
        }
        if(enemy.bullet1col < 10) {
            enemy.bullet1Exists = 0;
        }
        if(bullet.col >= enemy.col && bullet.row >= enemy.row && bullet.row <= (enemy.row + 30) && bullet.isHit == 0 && bulletExists == 1) {
            enemy.lives--; 
            bullet.isHit = 1;
        }

        if(KEY_DOWN_NOW(KEY_A) && bulletExists == 0) {
            bullet.row = player.row + 16;
            bullet.col = player.col + 40;
            bulletExists = 1;
        }

        if(bulletExists == 1) {
            if(bullet.isHit == 0) {
                bullet.col = bullet.col + 5;
                drawRect4(bullet.row, bullet.col, 7, 7, REDIDX);
            } else {
                bulletExists = 0;
                bullet.isHit = 0;
            }
        }

        if(bullet.col + 7 >= 240) {
            bulletExists = 0;
        }



        sprintf(scoreText, "Score: %d", score);
        drawString4(5,5, scoreText, REDIDX);
        countScore--;
        score = countScore/50;
        sprintf(livesText, "Lives: %d", lives);
        drawString4(5, 75, livesText, REDIDX);
        drawString4(5, 67, "|", BLACKIDX);
        sprintf(enemyLivesText,"Enemy Lives: %d", enemy.lives);
        drawString4(5, 150, enemyLivesText, REDIDX);
        drawString4(8,0, "________________________________________", BLACKIDX);
        waitForVBlank();
        FlipPage();

    }
}

void win() {
    while(1) {
        char myBuff[41] = "Score:";
        if(KEY_DOWN_NOW(KEY_SELECT)) {
             main();
        }
        fillScreen4(BLACKIDX);
        drawString4(70, 90, "YOU WIN!", REDIDX);
        sprintf(myBuff, "Score: %d", score);
        drawString4(90, 87, myBuff, REDIDX);
        waitForVBlank();
        FlipPage();
    }
}




void lose() {
    loadPalette4(gameOver_palette);
    while(1) {
        if(KEY_DOWN_NOW(KEY_SELECT)) {
            main();
        }
        drawImage4(0,0, GAMEOVER_WIDTH, GAMEOVER_HEIGHT, gameOver);
        waitForVBlank();
        FlipPage();
    }
}

