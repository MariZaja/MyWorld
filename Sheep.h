//
// Created by Marysia on 12.04.2022.
//

#ifndef MYWORLD_SHEEP_H
#define MYWORLD_SHEEP_H
#include "Animal.h"

class Sheep: public Animal {
    void action() override;
    void colision() override;
    void draw() override;
public:
    Sheep(World& w);
};


#endif //MYWORLD_SHEEP_H
