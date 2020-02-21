#include <SDL2/SDL.h>
#include "Color.h"

class Renderer{
    SDL_Renderer* _renderer;
    Color _color;
    public:
    explicit Renderer(SDL_Window* window);
    void clear();
    void present();
    void setColor();
}
