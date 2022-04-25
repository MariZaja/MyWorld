//
// Created by Marysia on 12.04.2022.
//

#ifndef MYWORLD_TURTLE_H
#define MYWORLD_TURTLE_H
#include "Animal.h"

class Turtle: public Animal {
    void action() override;
    void draw() override;
    void setDirection(int d) override;
public:
    Turtle(World& w, int x, int y);
};



#endif //MYWORLD_TURTLE_H
