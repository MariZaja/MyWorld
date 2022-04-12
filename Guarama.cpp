//
// Created by Marysia on 12.04.2022.
//

#include "Guarama.h"

Guarama::Guarama(World &w) : Plant(w) {
    force = 0;
}

void Guarama::action() {

}

void Guarama::colision() {

}

void Guarama::draw() {
    std::cout<< 'g';
}
