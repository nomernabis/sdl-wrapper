#pragma once
#include <SDL2/SDL.h>

class Color{
    Uint8 red;
    Uint8 green;
    Uint8 blue;
    Uint8 alpha;
    public:
    Color();
    Color(const Uint8& red, const Uint8& green, const Uint8& blue, const Uint8& alpha = 0xFF);
};
