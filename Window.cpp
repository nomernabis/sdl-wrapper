#include "Window.h"
#include <SDL2/SDL_image.h>

Window::Window(const std::string& title, const int& width, const int& height): _running(true){
    SDL_Init(SDL_INIT_VIDEO);
    IMG_Init(IMG_INIT_PNG);
    _window = SDL_CreateWindow(
            title.c_str(),
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            width,
            height,
            SDL_WINDOW_SHOWN
    );
    _renderer = new Renderer(_window);
}

Window::~Window(){
    delete _renderer;
    SDL_DestroyWindow(_window); 
    _window = NULL;
    _renderer = NULL;
    SDL_Quit();
}

bool Window::isRunning() const{
    return _running;
}

void Window::close(){
    _running = false;
}

void Window::clear(){ 
    _renderer->clear();
}

void Window::present(){
    _renderer->present();
}

void Window::setColor(const Color& color){
    _renderer->setColor(color);
}

void Window::fillRect(SDL_Rect rect){
    _renderer->fillRect(rect);
}

SDL_Texture* Window::loadTexture(std::string path){
    return _renderer->loadTexture(path);
}

void Window::drawTexture(SDL_Texture* texture){
    _renderer->renderCopy(texture);
}
