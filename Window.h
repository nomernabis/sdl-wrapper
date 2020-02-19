#pragma once
#include <string>
#include <SDL2/SDL.h>

class Window{
    SDL_Window* window;
    bool running;
    public:
    Window(const std::string& title, const int& width, const int& height);
    ~Window();
    bool isRunning();
    void close();
    void clear();
    void present();
};
