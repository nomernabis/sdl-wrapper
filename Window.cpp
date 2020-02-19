
#include "Window.h"

Window::Window(const std::string& title, const int& width, const int& height){
    SDL_Init(SDL_INIT_VIDEO);
    this->window = SDL_CreateWindow(
            title.c_str(),
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            width,
            height,
            SDL_WINDOW_SHOWN
    );

}

Window::~Window(){
    SDL_DestroyWindow(this->window); 
    this->window = NULL;
    SDL_Quit();
}

bool Window::isRunning(){
    return this->running;
}

void Window::close(){
    this->running = false;
}

void Window::clear(){
    
}

void Window::present(){

}
