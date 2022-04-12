//
// Created by Marysia on 11.04.2022.
//

#include "Grass.h"

Grass::Grass(World& w): Plant(w) {
    force = 0;
}

void Grass::action() {
    
}

void Grass::colision() {

}

void Grass::draw() {
    std::cout << 'r';
}
