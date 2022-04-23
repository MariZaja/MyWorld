//
// Created by Marysia on 11.04.2022.
//

#include "Plant.h"

Plant::Plant(World &w, int x, int y) : Organism(w, x, y) {
    initiative = 0;
    setProbabilityOfSpreading();
}

void Plant::setProbabilityOfSpreading() {
    probabilityOfSpreading = rand() % RANDOM;
}

void Plant::action() {

}