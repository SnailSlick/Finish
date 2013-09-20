#include "game.h"

void game::run(){

    while(quit == false){

        while(input.pollEvent()){

            if(input.getStop() == true){
                quit = true;
            }


        }
    }
}
