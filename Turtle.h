//
// Created by Marysia on 12.04.2022.
//

#ifndef MYWORLD_TURTLE_H
#define MYWORLD_TURTLE_H
#include "Animal.h"

class Turtle: public Animal {
    void action() override;
    void colision() override;
    void draw() override;
public:
    Turtle(World& w);
};



#endif //MYWORLD_TURTLE_H
