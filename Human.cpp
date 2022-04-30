//
// Created by Marysia on 15.04.2022.
//

#include "Human.h"

Human::Human(World &w, int x, int y) : Animal(w, x, y) {
    force = 5;
    tempForce = 5;
    initiative = 4;
    direction = 0;
    ID = 10;
    powerDelay = 0;
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

void Human::draw() {
    std::cout << 'H';
}

void Human::setDirection(int d) {
    direction = d;
}

void Human::setPower(int p) {
    if (powerDelay == 0){ force = tempForce + p; }
    else { powerDelay -= 1; force = tempForce ;}
    if (p == 1) { powerDelay = 5; }
}

void Human::forceBoost(int f) {
    tempForce += f;
    Organism::forceBoost(f);
}

int Human::getPowerDelay() {
    return powerDelay;
}

int Human::getTempForce() {
    return tempForce;
}

void Human::setPowerDelay(int d) {
    powerDelay = d;
}

void Human::setTempForce(int t) {
    tempForce = t;
}
