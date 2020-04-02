
#include "Renderer.h"

Renderer::Renderer(SDL_Window* window){
    _renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}

Renderer::~Renderer(){
    SDL_DestroyRenderer(_renderer);
    _renderer = NULL;
}

void Renderer::clear(){
    SDL_RenderClear(_renderer);
}

void Renderer::present(){
    SDL_RenderPresent(_renderer);
}

void Renderer::setColor(const Color& color){
    SDL_SetRenderDrawColor(_renderer, color.red(), color.green(), color.blue(), color.alpha());
}

Color& Renderer::getColor() const {
    Uint8 r, g, b, a;
    SDL_GetRenderDrawColor(_renderer, &r, &g, &b, &a);
    Color color = {r, g, b, a};
    return color;
}

void Renderer::fillRect(const SDL_Rect& rect){
    SDL_RenderFillRect(_renderer, &rect);
}

SDL_Texture* Renderer::loadTexture(std::string path){
    SDL_Surface* surface = IMG_Load(path.c_str());
    SDL_Texture* texture = SDL_CreateTextureFromSurface(_renderer, surface);
    SDL_FreeSurface(surface);
    return texture;
}

void Renderer::renderCopy(SDL_Texture* texture){
    SDL_RenderCopy(_renderer, texture, NULL, NULL);
}
