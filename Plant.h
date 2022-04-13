//
// Created by Marysia on 11.04.2022.
//
#ifndef MYWORLD_PLANT_H
#define MYWORLD_PLANT_H
#include "Organism.h"

class Plant: public Organism {
    int probabilityOfSpreading;
public:
    Plant(World &w, int x, int y);
};


#endif //MYWORLD_PLANT_H
