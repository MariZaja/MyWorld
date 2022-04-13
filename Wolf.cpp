//
// Created by Marysia on 12.04.2022.
//

#include "Wolf.h"

Wolf::Wolf(World &w, int x, int y) : Animal(w, x, y) {
    force = 9;
    initiative = 5;
}

void Wolf::action() {

}

void Wolf::colision() {

}

void Wolf::draw() {
    std::cout << 'w';
}
