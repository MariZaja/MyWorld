//
// Created by Marysia on 10.04.2022.
//
#ifndef MYWORLD_ORGANISM_H
#define MYWORLD_ORGANISM_H
#include "World.h"

class World;

class Organism {
protected:
    int initiative;
    int force;
    int born;
    int organismX, organismY;
    World& world;
public:
    int getForce() const;
    int getInitiative() const;
    int getAge() const;
    Organism(World& w, int x, int y);
    virtual void action() =0;
    virtual void colision() =0;
    virtual void draw() =0;
    virtual void setDirection(int d) =0;
    virtual void setPosition(int x, int y);
};


#endif //MYWORLD_ORGANISM_H
