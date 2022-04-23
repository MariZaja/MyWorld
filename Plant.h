//
// Created by Marysia on 11.04.2022.
//
#ifndef MYWORLD_PLANT_H
#define MYWORLD_PLANT_H
#include "Organism.h"

#define RANDOM 7

class Plant: public Organism {
protected:
    int probabilityOfSpreading;
    void action() override;
public:
    Plant(World &w, int x, int y);
    void setProbabilityOfSpreading();
};


#endif //MYWORLD_PLANT_H
