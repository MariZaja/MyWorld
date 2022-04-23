//
// Created by Marysia on 12.04.2022.
//

#ifndef MYWORLD_SHEEP_H
#define MYWORLD_SHEEP_H
#include "Animal.h"

class Sheep: public Animal {
    void colision() override;
    void draw() override;
    void setDirection(int d) override;
public:
    Sheep(World& w, int x, int y);
};


#endif //MYWORLD_SHEEP_H
