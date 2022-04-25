//
// Created by Marysia on 12.04.2022.
//

#include "Dandelion.h"

Dandelion::Dandelion(World &w, int x, int y) : Plant(w, x, y) {
    force = 0;
    ID = 1;
}

void Dandelion::action() {
    int trySpreading=3;
    for (int i=0; i<trySpreading; i++){
        Plant::action();
    }
}

void Dandelion::draw() {
    std::cout << 'd';
}

void Dandelion::setDirection(int d) {

}
