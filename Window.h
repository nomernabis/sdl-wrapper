#pragma once
#include <string>
#include <SDL2/SDL.h>

class Window{
    SDL_Window* _window;
    bool _running;
    public:
    Window(const std::string& title, const int& width, const int& height);
    ~Window();
    bool isRunning() const;
    void close();
    void clear();
    void present();
};
