#include <os.h>
#include <keys.h>
#include <stdio.h>

#include "os/graphics.h"

int main(){
    uint16_t *screen = malloc(320 * 240 * sizeof(uint16_t));
    memset(screen, 0xFF, 320*240*sizeof(uint16_t));
    bool isRunning = true;


    lcd_init(SCR_320x240_565);


    bitmap_t txt_a;
    txt_a.buff = FONT_A;
    txt_a.h = FONT_HEIGHT;
    txt_a.w = FONT_WDITH;

    drawBitMap(5, 5, to16Bit(0,255,0), &txt_a, screen);
    while(isRunning){
        if(isKeyPressed(KEY_NSPIRE_ESC)){
            isRunning = false;
        }


        int rx = rand() % 320;
        int ry = rand() % 240;

        int rr = rand() % 255;
        int rg = rand() % 255;
        int rb = rand() % 255;

        drawRect(rx, ry, 4, 4, to16Bit(rr, rg, rb), screen);
    

        
        lcd_blit(screen, SCR_320x240_565);
    }
    
    msleep(4000);

    lcd_init(SCR_TYPE_INVALID);
    free(screen);


    return 0;
}