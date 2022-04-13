//
// Created by Marysia on 11.04.2022.
//
#include "Organism.h"
#ifndef MYWORLD_ANIMAL_H
#define MYWORLD_ANIMAL_H

class Animal: public Organism {
    void action() override;
public:
    Animal(World& w);
};


#endif //MYWORLD_ANIMAL_H
