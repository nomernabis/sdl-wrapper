
#include "Renderer.h"

Renderer::Renderer(SDL_Window* window){
    _renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}

void Renderer::clear(){
    SDL_RenderClear(_renderer);
}

void Renderer::present(){
    SDL_RenderPresent(_renderer);
}
