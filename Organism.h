//
// Created by Marysia on 10.04.2022.
//
#ifndef MYWORLD_ORGANISM_H
#define MYWORLD_ORGANISM_H
#include "World.h"

class World;

class Organism {
    virtual void action() =0;
    virtual void colision() =0;
protected:
    int initiative;
    int force;
    int age;
    int organismX, organismY;
    World& world;
public:
    int getForce() const;
    int getInitiative() const;
    int getAge() const;
    Organism(World& w, int x, int y);
    virtual void draw() =0;
};


#endif //MYWORLD_ORGANISM_H
