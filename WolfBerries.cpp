//
// Created by Marysia on 12.04.2022.
//

#include "WolfBerries.h"

WolfBerries::WolfBerries(World &w, int x, int y) : Plant(w, x, y) {
    force = 99;
    ID = 3;
}

void WolfBerries::action() {

}

void WolfBerries::colision() {

}

void WolfBerries::draw() {
    std::cout<< 'b';
}

void WolfBerries::setDirection(int d) {

}
