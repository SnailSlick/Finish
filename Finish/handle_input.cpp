#ifndef HANDLE_INPUT_H_DEFINED
#define HANDLE_INPUT_H_DEFINED

#include "handle_input.cpp"

handle_input::handle_input(){
    stop = false;
}

int handle_input::pollEvent(){

    SDL_PollEvent(&event);
}

#endif
