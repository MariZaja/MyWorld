//
// Created by Marysia on 11.04.2022.
//
#ifndef MYWORLD_GRASS_H
#define MYWORLD_GRASS_H
#include "Plant.h"

class Grass: public Plant {
    void action() override;
    void colision() override;
public:
    Grass(World& w);
};


#endif //MYWORLD_GRASS_H
