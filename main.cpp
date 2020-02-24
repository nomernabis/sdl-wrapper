#include <iostream>
#include "Window.h"
#include <string>
#include "Colors.h"

int main(){
    const std::string title = "Game Window"; 
    const int WIDTH = 640;
    const int HEIGHT = 320;
    SDL_Event event;
    Window w(title, WIDTH, HEIGHT);
    while(w.isRunning()){
        while(SDL_PollEvent(&event) != 0){
            if(event.type == SDL_QUIT){
                w.close();
            }
        }
        w.setColor(Colors::WHITE);
        w.clear();
        w.present();
    }
}
