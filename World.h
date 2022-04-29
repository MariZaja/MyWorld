//
// Created by Marysia on 10.04.2022.
//

#ifndef MYWORLD_WORLD_H
#define MYWORLD_WORLD_H
#include <iostream>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <fstream>
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
    void printArea();
    bool action();
    char menu();
    void save();
    void load();
public:
    Organism** organisms;
    World();
    ~World();
    void start();
    void commentary();
    void move(int fromX, int fromY, int toX, int toY);
    void deleteOrganism(int x, int y);
    int getWorldX();
    int getWorldY();
    int getAge();
    bool checkPosition(int x, int y);
    void setNewOrganism(int x, int y, int number);
    bool end;
};


#endif //MYWORLD_WORLD_H
