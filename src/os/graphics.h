#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <os.h>
#include "font.h"

typedef struct BitMap {
    uint16_t w;
    uint16_t h;
    uint16_t *buff;

} bitmap_t;

uint16_t to16Bit(const uint8_t r, const uint8_t g, const uint8_t b);
void drawPixel(const int16_t x, const int16_t y, const uint16_t c, uint16_t *fbuff);
void drawRect(const int16_t x, const int16_t y, const int16_t w, const int16_t h, const uint16_t c, uint16_t *fbuff);
void drawBitMap(const int16_t x, const int16_t y, const uint16_t c, const bitmap_t *b, uint16_t *fbuff);




#endif