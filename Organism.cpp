//
// Created by Marysia on 11.04.2022.
//

#include "Organism.h"

Organism::Organism(World *w) {
    world = w;
}

int Organism::getInitiative() const {
    return initiative;
}

int Organism::getForce() const{
    return force;
}