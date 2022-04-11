//
// Created by Marysia on 11.04.2022.
//
#include "Plant.h"
#ifndef MYWORLD_GRASS_H
#define MYWORLD_GRASS_H


class Grass: public Plant {
    void action() override;
    void colision() override;
    Grass();
};


#endif //MYWORLD_GRASS_H
