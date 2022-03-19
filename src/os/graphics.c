#include "graphics.h"

uint16_t to16Bit(const uint8_t r, const uint8_t g, const uint8_t b){
    uint16_t color = r;

    color = color << 6;
    color |= g;
    color = color << 5;
    color |= b;

    return color;
}

void drawPixel(const int16_t x, const int16_t y, const uint16_t c, uint16_t *fbuff){
    if(x > 320 || x < 0 || y > 240 || y < 0) return;

    fbuff[x + y * 320] = c;
}

void drawRect(const int16_t x, const int16_t y, const int16_t w, const int16_t h, const uint16_t c, uint16_t *fbuff){
    for(uint16_t xx = x; xx < x + w; xx++){
        for(uint16_t yy = y; yy < y + h; yy++){
            drawPixel(xx, yy, c, fbuff);
        }
    }
}