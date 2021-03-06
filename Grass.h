//
// Created by Marysia on 11.04.2022.
//
#ifndef MYWORLD_GRASS_H
#define MYWORLD_GRASS_H
#include "Plant.h"

class Grass: public Plant {
    void action() override;
    void colision() override;
    void draw() override;
    void setDirection(int d) override;
public:
    Grass(World& w, int x, int y);
};


#endif //MYWORLD_GRASS_H
