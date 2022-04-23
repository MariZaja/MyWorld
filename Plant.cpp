//
// Created by Marysia on 11.04.2022.
//

#include "Plant.h"

Plant::Plant(World &w, int x, int y) : Organism(w, x, y) {
    initiative = 0;
    setProbabilityOfSpreading();
}

void Plant::setProbabilityOfSpreading() {
    probabilityOfSpreading = 0;
    while(probabilityOfSpreading == 0){
        probabilityOfSpreading = abs(rand() % RANDOM);
    }
}

void Plant::action() {
    setDestination(1);
    int spreading = rand() % probabilityOfSpreading;
    if (world.checkPosition(toX, toY) && world.organisms[(toX*world.getWorldY())+toY] == NULL && (spreading == 0)){
        world.setNewOrganism(toX, toY, this->getID());
    }
    setProbabilityOfSpreading();
}