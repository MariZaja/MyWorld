//
// Created by Marysia on 10.04.2022.
//
#pragma once
#ifndef MYWORLD_WORLD_H
#define MYWORLD_WORLD_H
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <fstream>
#include "Console.h"
#include "Commentator.h"

#define MAX_INITIATIVE 8

class Organism;
class Human;

class World {
    int worldX, worldY;
    int worldAge;
    Console* console;
    Commentator* com;
    Human* h;
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
    void setCommentary(int action, int winner, int loser);
    void move(int fromX, int fromY, int toX, int toY);
    void deleteOrganism(int x, int y);
    int getWorldY();
    int getAge();
    bool checkPosition(int x, int y);
    void setNewOrganism(int x, int y, int number);
    bool end;
};


#endif //MYWORLD_WORLD_H
