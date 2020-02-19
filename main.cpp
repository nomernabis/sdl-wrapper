#include <iostream>
#include "Window.h"
#include <string>

int main(){
    const std::string title = "Game Window"; 
    const int WIDTH = 640;
    const int HEIGHT = 320;
    Window w(title, WIDTH, HEIGHT);
    while(w.isRunning()){
        w.clear();
        w.present();
    }
}
