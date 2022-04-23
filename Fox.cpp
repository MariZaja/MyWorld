//
// Created by Marysia on 12.04.2022.
//

#include "Fox.h"

Fox::Fox(World &w, int x, int y) : Animal(w, x, y) {
    force = 3;
    initiative = 7;
}

void Fox::action() {
    setDestination(1);
    int to = (toX)*world.getWorldY()+(toY);
    if (world.checkPosition(toX, toY)){
        if((world.organisms[to]!=NULL && world.organisms[to]->getForce() <= this->getForce()) || world.organisms[to]==NULL){
            world.move(this->organismX, this->organismY, toX, toY);
        }
    }
}

void Fox::colision() {

}

void Fox::draw() {
    std::cout << 'f';
}

void Fox::setDirection(int d) {

}