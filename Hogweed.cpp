//
// Created by Marysia on 12.04.2022.
//

#include "Hogweed.h"
#define IF_ANIMAL 4

Hogweed::Hogweed(World &w, int x, int y) : Plant(w, x, y) {
    force = 10;
    ID = 4;
}

void Hogweed::action() {
    Plant::action();
    int a = -1, b = -1;
    int target = (organismX+a)*world.getWorldY()+(organismY+b);
    while(a<2){
        while(b<2){
            target = (organismX+a)*world.getWorldY()+(organismY+b);
            if (world.checkPosition(organismX+a, organismY+b)){
                if (world.organisms[target] != NULL && world.organisms[target]->getID()>IF_ANIMAL){
                    world.deleteOrganism(organismX+a, organismY+b);
                }
            }b++;
        }b--;
        a++;
    }
}

bool Hogweed::collision(Organism *o) {
    if (o->getID()>IF_ANIMAL){
        world.deleteOrganism(o->getOrganismX(), o->getOrganismY());
        return true;
    }
    return Organism::collision(o);
}


void Hogweed::draw() {
    std::cout<< '#';
}

void Hogweed::setDirection(int d) {

}