//
// Created by Marysia on 12.04.2022.
//

#include "Antelope.h"

Antelope::Antelope(World &w) : Animal(w) {
    force = 4;
    initiative = 4;
}

void Antelope::action() {

}

void Antelope::colision() {

}

void Antelope::draw() {
    std::cout << 'a';
}
