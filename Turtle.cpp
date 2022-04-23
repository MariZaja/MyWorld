//
// Created by Marysia on 12.04.2022.
//

#include "Turtle.h"

Turtle::Turtle(World &w, int x, int y) : Animal(w, x, y) {
    force = 2;
    initiative = 1;
    ID = 8;
}

void Turtle::action() {
    int moving = rand() % 4;
    if (moving == 0){
        Animal::action();
    }
}

void Turtle::colision() {

}

void Turtle::draw() {
    std::cout << 'u';
}

void Turtle::setDirection(int d) {

}
