//
// Created by Marysia on 10.04.2022.
//

#ifndef MYWORLD_WORLD_H
#define MYWORLD_WORLD_H
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "Organism.h"
#include "Console.h"
//#include "Human.h"

class Organism;

class World {
    int worldX, worldY;
    int worldAge;
    Console* console;
    //Human* human;
    Organism** organisms;
    void setArea();
    void setNewOrganism(int x, int y, int number);
    void printArea();
    bool action();
public:
    int slowo = 0;
    World(int x, int y);
    ~World();
    void start();
    void commentary();
    void move(int fromX, int fromY, int toX, int toY);
    int getWorldX();
    int getWorldY();
};


#endif //MYWORLD_WORLD_H
