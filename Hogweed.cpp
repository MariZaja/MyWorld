//
// Created by Marysia on 12.04.2022.
//

#include "Hogweed.h"

Hogweed::Hogweed(World &w) : Plant(w) {
    force = 10;
}

void Hogweed::action() {

}

void Hogweed::colision() {

}

void Hogweed::draw() {
    std::cout<< 'h';
}
