#include "Color.h"

Color::Color(){}

Color::Color(const Uint8& red, const Uint8& green, const Uint8& blue, const Uint8& alpha){
    _red = red;
    _green = green;
    _blue = blue;
    _alpha = alpha;
}
