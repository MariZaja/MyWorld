//
// Created by Marysia on 10.04.2022.
//

#ifndef MYWORLD_WORLD_H
#define MYWORLD_WORLD_H
#include <iostream>
#include <vector>
#include "Organism.h"

class World {
    int worldX, worldY;
    int worldAge;
    std::vector < Organism > organisms;
    typedef struct area_t{
        Organism* resident;
    };
    void setArea();
    void printArea();
    bool action();
public:
    int i = 0;
    World(int x, int y);
    ~World();
    void start();
    void commentary();
};


#endif //MYWORLD_WORLD_H
