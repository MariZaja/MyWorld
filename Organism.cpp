//
// Created by Marysia on 11.04.2022.
//

#include "Organism.h"

Organism::Organism(World &w, int x, int y)
    : organismX{ x }, organismY{ y }, world{ w }{
    born = world.getAge();
}

int Organism::getInitiative() const {
    return initiative;
}

int Organism::getForce() const{
    return force;
}

int Organism::getAge() const{
    return born;
}

void Organism::setPosition(int x, int y) {
    organismX = x;
    organismY = y;
}

void Organism::setDestination(int fields) {
    srand (time(NULL));
    this->toX = this->organismX + (rand()%3 - 1)*fields;
    this->toY = this->organismY + (rand()%3 - 1)*fields;
}
