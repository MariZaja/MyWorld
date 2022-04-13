//
// Created by Marysia on 12.04.2022.
//

#include "Dandelion.h"

Dandelion::Dandelion(World &w, int x, int y) : Plant(w, x, y) {
    force = 0;
}

void Dandelion::action() {

}

void Dandelion::colision() {

}

void Dandelion::draw() {
    std::cout << 'd';
}
