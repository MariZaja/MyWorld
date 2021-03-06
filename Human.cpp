//
// Created by Marysia on 15.04.2022.
//

#include "Human.h"

Human::Human(World &w, int x, int y) : Animal(w, x, y) {
    force = 5;
    initiative = 4;
    direction = 0;
}

void Human::action() {
    switch (direction){
        case UP:
            world.move(organismX, organismY, organismX, organismY-1);
            break;
        case RIGHT:
            world.move(organismX, organismY, organismX+1, organismY);
            break;
        case DOWN:
            world.move(organismX, organismY, organismX, organismY+1);
            break;
        case LEFT:
            world.move(organismX, organismY, organismX-1, organismY);
            break;
    }
}

void Human::colision() {

}

void Human::draw() {
    std::cout << 'H';
}

void Human::setDirection(int d) {
    direction = d;
}
