#include <SDL2/SDL.h>
#include "Color.h"
#include <string>
#include <SDL2/SDL_image.h>

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
    SDL_Texture* loadTexture(std::string path);
    void renderCopy(SDL_Texture* texture, SDL_Rect* rect);
    void drawRect(const SDL_Rect& rect);
};
