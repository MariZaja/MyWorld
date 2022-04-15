//
// Created by Marysia on 12.04.2022.
//

#include "Fox.h"

Fox::Fox(World &w, int x, int y) : Animal(w, x, y) {
    force = 3;
    initiative = 7;
}

void Fox::action() {

}

void Fox::colision() {

}

void Fox::draw() {
    std::cout << 'f';
}

void Fox::setDirection(int d) {

}
