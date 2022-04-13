//
// Created by Marysia on 13.04.2022.
//

#include "Human.h"

Human::Human(World &w, int x, int y) : Animal(w, x, y) {
    force = 5;
    initiative = 4;
}

void Human::action() {
    int x=world.getWorldX();
    int y=world.getWorldY();
    switch (direction){
        case UP:
            world.move(organismX, organismY, organismX, (organismY-1)%y);
            break;
        case RIGHT:
            world.move(organismX, organismY, (organismX+1)%x, organismY);
            break;
        case DOWN:
            world.move(organismX, organismY, organismX, (organismY+1)%y);
            break;
        case LEFT:
            world.move(organismX, organismY, (organismX-1)%x, organismY);
            break;
    }
}

void Human::draw(){
    std::cout << "H";
}

void Human::setDirection(int d) {
    direction = d;
}

void Human::colision() {

}
