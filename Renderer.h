#include <SDL2/SDL.h>
#include "Color.h"

class Renderer{
    SDL_Renderer* _renderer;
    public:
    explicit Renderer(SDL_Window* window);
    ~Renderer();
    void clear();
    void present();
    void setColor(const Color& color);
    void fillRect(const SDL_Rect& rect);
    Color& getColor() const;
};
