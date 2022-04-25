//
// Created by Marysia on 12.04.2022.
//

#include "Antelope.h"

Antelope::Antelope(World &w, int x, int y) : Animal(w, x, y) {
    force = 4;
    initiative = 4;
    ID = 9;
}

void Antelope::action() {
    setDestination(2);
    if (world.checkPosition(toX, toY)){
        world.move(this->organismX, this->organismY, toX, toY);
    }
}

void Antelope::draw() {
    std::cout << 'a';
}

void Antelope::setDirection(int d) {

}
