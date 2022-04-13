//
// Created by Marysia on 13.04.2022.
//

#ifndef MYWORLD_HUMAN_H
#define MYWORLD_HUMAN_H
#include "Animal.h"

class Human: public Animal {
    void action() override;
    void colision() override;
    void draw() override;
public:
    Human(World& w);
};



#endif //MYWORLD_HUMAN_H
