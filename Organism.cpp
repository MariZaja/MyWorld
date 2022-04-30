//
// Created by Marysia on 11.04.2022.
//

#include "Organism.h"

Organism::Organism(World &w, int x, int y)
    : organismX{ x }, organismY{ y }, world{ w }{
    born = world.getAge();
}

bool Organism::collision(Organism *o) {
    if (o->getForce() > this->getForce()){
        world.deleteOrganism(organismX, organismY);
    }
    else if(o->getForce() < this->getForce()){
        world.deleteOrganism(o->getOrganismX(), o->getOrganismY());
        return true;
    }
    else if (o->getForce() == this->getForce()){
        if(o->getID() == ID){
            o->multiply(organismX, organismY);
            return true;
        }
        else{
            world.deleteOrganism(organismX, organismY);
        }
    }
}

int Organism::getInitiative() const {
    return initiative;
}

int Organism::getForce() const{
    return force;
}

int Organism::getAge() const{
    return born;
}

void Organism::setPosition(int x, int y) {
    organismX = x;
    organismY = y;
}

void Organism::setDestination(int fields) {
    this->toX = this->organismX + (rand()%3 - 1)*fields;
    this->toY = this->organismY + (rand()%3 - 1)*fields;
}

int Organism::getID() const {
    return ID;
}

Organism::~Organism() {

}

int Organism::getOrganismY() const {
    return organismY;
}

int Organism::getOrganismX() const{
    return organismX;
}

void Organism::forceBoost(int f) {
    force += f;
}

void Organism::multiply(int x, int y) {
    bool stop=false;
    while(!stop){
        setDestination(1);
        if (toX != x && toY != y && world.checkPosition(toX, toY)){ stop = true; }
    }
    if (world.organisms[toX*world.getWorldY()+toY] == NULL){ world.setNewOrganism(toX, toY, ID); }
}

void Organism::setForce(int f) {
    force = f;
}

void Organism::setAge(int a) {
    born = a;
}

void Organism::setInitiative(int i) {
    initiative = i;
}
