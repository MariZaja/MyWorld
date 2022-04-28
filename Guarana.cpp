//
// Created by Marysia on 12.04.2022.
//

#include "Guarana.h"

Guarana::Guarana(World &w, int x, int y) : Plant(w, x, y) {
    force = 0;
    ID = 2;
}

bool Guarana::collision(Organism *o) {
    o->forceBoost(3);
    return Organism::collision(o);
}

void Guarana::draw() {
    std::cout<< 'g';
}

void Guarana::setDirection(int d) {

}
