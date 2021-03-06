#pragma once
#include <string>
#include <SDL2/SDL.h>
#include "Renderer.h"

class Window{
    SDL_Window* _window;
    Renderer* _renderer;
    bool _running;
    public:
    Window(const std::string& title, const int& width, const int& height);
    ~Window();
    bool isRunning() const;
    void close();
    void clear();
    void present();
    void setColor(const Color& color);
    void fillRect(SDL_Rect rect);
    SDL_Texture* loadTexture(std::string path);
    void drawTexture(SDL_Texture* texture, SDL_Rect* rect);
    void drawRect(const SDL_Rect& rect);
    void drawRotated(SDL_Texture* texture, SDL_Rect* rect, SDL_Rect* clip, double angle, SDL_Point* center, SDL_RendererFlip flip);
};
