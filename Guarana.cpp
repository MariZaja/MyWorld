//
// Created by Marysia on 12.04.2022.
//

#include "Guarana.h"

Guarana::Guarana(World &w, int x, int y) : Plant(w, x, y) {
    force = 0;
}

void Guarana::action() {

}

void Guarana::colision() {

}

void Guarana::draw() {
    std::cout<< 'g';
}
