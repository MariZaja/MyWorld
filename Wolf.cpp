//
// Created by Marysia on 12.04.2022.
//

#include "Wolf.h"

Wolf::Wolf(World &w) : Animal(w) {
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
