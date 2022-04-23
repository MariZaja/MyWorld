//
// Created by Marysia on 11.04.2022.
//
#ifndef MYWORLD_ANIMAL_H
#define MYWORLD_ANIMAL_H
#include "Organism.h"

class Animal: public Organism {
protected:
    void action() override;

public:
    Animal(World& w, int x, int y);
};


#endif //MYWORLD_ANIMAL_H
