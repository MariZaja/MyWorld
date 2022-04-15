//
// Created by Marysia on 12.04.2022.
//

#include "Sheep.h"

Sheep::Sheep(World &w, int x, int y) : Animal(w, x, y) {
    force = 4;
    initiative = 4;
}

void Sheep::action() {

}

void Sheep::colision() {

}

void Sheep::draw() {
    std::cout << 's';
}

void Sheep::setDirection(int d) {

}
