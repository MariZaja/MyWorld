//
// Created by Marysia on 12.04.2022.
//

#include "Turtle.h"

Turtle::Turtle(World &w) : Animal(w) {
    force = 2;
    initiative = 1;
}

void Turtle::action() {

}

void Turtle::colision() {

}

void Turtle::draw() {
    std::cout << 'u';
}
