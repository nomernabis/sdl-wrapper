#pragma once
#include <SDL2/SDL.h>

class Color{
    Uint8 _red;
    Uint8 _green;
    Uint8 _blue;
    Uint8 _alpha;
    public:
    Color();
    Color(const Uint8& red, const Uint8& green, const Uint8& blue, const Uint8& alpha = 0xFF);
    const Uint8& red() const;
    const Uint8& green() const;
    const Uint8& blue() const;
    const Uint8& alpha() const;
};
