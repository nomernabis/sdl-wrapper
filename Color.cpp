#include "Color.h"

Color::Color(){}

Color::Color(const Uint8& red, const Uint8& green, const Uint8& blue, const Uint8& alpha){
    _red = red;
    _green = green;
    _blue = blue;
    _alpha = alpha;
}

const Uint8& Color::red() const{
    return _red;
}

const Uint8& Color::green() const{
    return _green;
}

const Uint8& Color::blue() const{
    return _blue;
}

const Uint8& Color::alpha() const{
    return _alpha;
}
