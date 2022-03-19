#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <os.h>

uint16_t to16Bit(const uint8_t r, const uint8_t g, const uint8_t b);
void drawPixel(const int16_t x, const int16_t y, const uint8_t c, const char *fbuff);
void drawRect(const int16_t x, const int16_t y, const int16_t w, const int16_t h, const uint8_t c);



#endif