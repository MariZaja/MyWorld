//
// Created by Marysia on 10.04.2022.
//
#ifndef MYWORLD_ORGANISM_H
#define MYWORLD_ORGANISM_H
#include "World.h"
#include <time.h>

class World;

class Organism {
protected:
    int ID;
    int initiative;
    int force;
    int born;
    int organismX, organismY, toX, toY;
    World& world;
public:
    int getForce() const;
    int getInitiative() const;
    int getAge() const;
    void setForce(int f);
    void setInitiative(int i);
    void setAge(int a);
    int getID() const;
    int getOrganismX() const;
    int getOrganismY() const;
    virtual void forceBoost(int f);
    Organism(World& w, int x, int y);
    ~Organism();
    void multiply(int x, int y);
    virtual void action() =0;
    virtual bool collision(Organism* o);
    virtual void draw() =0;
    virtual void setDirection(int d) =0;
    virtual void setPosition(int x, int y);
    virtual void setDestination(int fields);
};


#endif //MYWORLD_ORGANISM_H
