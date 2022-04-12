//
// Created by Marysia on 12.04.2022.
//

#ifndef MYWORLD_ANTELOPE_H
#define MYWORLD_ANTELOPE_H
#include "Animal.h"

class Antelope: public Animal {
    void action() override;
    void colision() override;
    void draw() override;
public:
    Antelope(World& w);
};


#endif //MYWORLD_ANTELOPE_H
