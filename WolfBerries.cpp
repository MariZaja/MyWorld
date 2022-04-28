//
// Created by Marysia on 12.04.2022.
//

#include "WolfBerries.h"
#define IF_ANIMAL 4

WolfBerries::WolfBerries(World &w, int x, int y) : Plant(w, x, y) {
    force = 99;
    ID = 3;
}

bool WolfBerries::collision(Organism *o) {
    if (o->getID()>IF_ANIMAL){
        world.deleteOrganism(o->getOrganismX(), o->getOrganismY());
        return true;
    }
    return Organism::collision(o);
}

void WolfBerries::draw() {
    std::cout<< '%';
}

void WolfBerries::setDirection(int d) {

}
