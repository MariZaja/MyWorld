//
// Created by Marysia on 10.04.2022.
//
#include <iostream>
#include "Organism.h"
#include "God.h"
#ifndef MYWORLD_WORLD_H
#define MYWORLD_WORLD_H


class World {
    int worldX, worldY;
    Organism* organisms;
    /*typedef struct area{
        int areaX;
        int areaY;
        Organism* resident;
    };*/
    void setArea();
    void printArea();

public:
    int i = 0;
    World(int worldX, int worldY);
    ~World();
    bool action();
};


#endif //MYWORLD_WORLD_H
