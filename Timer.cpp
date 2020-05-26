#include "Timer.h"

Timer::Timer():startTicks(SDL_GetTicks()){}

Timer::~Timer(){}

void Timer::reset(int ticks){
    startTicks += ticks;
}

int Timer::getTicks(){
    return SDL_GetTicks() - startTicks;
}
