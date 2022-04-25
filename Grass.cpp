//
// Created by Marysia on 11.04.2022.
//

#include "Grass.h"

Grass::Grass(World& w, int x, int y): Plant(w, x, y) {
    force = 0;
    ID = 0;
}

void Grass::draw() {
    std::cout << 't';
}

void Grass::setDirection(int d) {

}
