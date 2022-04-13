//
// Created by Marysia on 13.04.2022.
//

#include "Human.h"

Human::Human(World &w) : Animal(w) {
    force = 5;
    initiative = 4;
}

void Human::action() {

}

void Human::colision() {

}

void Human::draw() {
    std::cout << "H";
}
