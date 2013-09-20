#include "SDL/SDL.h"

class handle_input{

    private:
        bool stop;
        SDL_Event event;

    public:
        handle_input();
        int pollEvent();
}
