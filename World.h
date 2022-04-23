//
// Created by Marysia on 10.04.2022.
//

#ifndef MYWORLD_WORLD_H
#define MYWORLD_WORLD_H
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include "Organism.h"
#include "Console.h"

#define MAX_INITIATIVE 8

class Organism;

class World {
    int worldX, worldY;
    int worldAge;
    Console* console;
    Organism* h;
    std::vector< Organism* > organismsIniciative[MAX_INITIATIVE];
    void setArea();
    void setNewOrganism(int x, int y, int number);
    void printArea();
    bool action();

public:
    World(int x, int y);
    ~World();
    void start();
    void commentary();
    void move(int fromX, int fromY, int toX, int toY);
    int getWorldX();
    int getWorldY();
    int getAge();

    Organism** organisms;

    bool checkPosition(int x, int y);
};


#endif //MYWORLD_WORLD_H
