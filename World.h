//
// Created by Marysia on 10.04.2022.
//

#ifndef MYWORLD_WORLD_H
#define MYWORLD_WORLD_H
#include <iostream>
#include <vector>
#include "Organism.h"

class Organism;

class World {
    int worldX, worldY;
    int worldAge;
    Organism** organisms;
    void setArea();
    void printArea();
    bool action();
public:
    int slowo = 0;
    World(int x, int y);
    ~World();
    void start();
    void commentary();
};


#endif //MYWORLD_WORLD_H
