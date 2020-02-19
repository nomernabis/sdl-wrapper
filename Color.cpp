#include "Color.h"

Color::Color(){}

Color::Color(const Uint8& red, const Uint8& green, const Uint8& blue, const Uint8& alpha){
    this->red = red;
    this->green = green;
    this->blue = blue;
    this->alpha = alpha;
}
