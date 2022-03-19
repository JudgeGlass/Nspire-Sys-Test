#include <os.h>
#include <keys.h>
#include <stdio.h>

int main(){
    const scr_type_t LCD = lcd_type();

    char *screen = malloc(320 * 240 * sizeof(uint16_t));
    memset(screen, 0xFF, 320*240*sizeof(uint16_t));
    screen[150 + 100 * 320] = (((255 + 0 + 0) / 3) >> 4);


    for(int x = 20; x < 40; x++){
        for(int y = 20; y < 40; y++){
            screen[x + y * 320] = (((255 + 0 + 0) / 3) >> 4);
        }
    }


    lcd_init(SCR_320x240_565);


    lcd_blit(screen, SCR_320x240_565);
    
    msleep(4000);

    lcd_init(SCR_TYPE_INVALID);
    free(screen);

    return 0;
}