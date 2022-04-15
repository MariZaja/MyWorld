//
// Created by Marysia on 11.04.2022.
//

#include "Organism.h"

Organism::Organism(World &w, int x, int y)
    : organismX{ x }, organismY{ y }, world{ w }{
    age = 1;
}

int Organism::getInitiative() const {
    return initiative;
}

int Organism::getForce() const{
    return force;
}

int Organism::getAge() const{
    return age;
}

void Organism::setPosition(int x, int y) {
    organismX = x;
    organismY = y;
}
