//
// Created by Marysia on 12.04.2022.
//

#include "WolfBerries.h"

WolfBerries::WolfBerries(World &w) : Plant(w) {
    force = 99;
}

void WolfBerries::action() {

}

void WolfBerries::colision() {

}

void WolfBerries::draw() {
    std::cout<< 'b';
}
