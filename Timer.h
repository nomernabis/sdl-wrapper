#include <SDL2/SDL.h>

class Timer{
    int startTicks;
    public:
    Timer();
    ~Timer();
    void reset(int ticks);
    int getTicks();
};
