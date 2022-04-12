//
// Created by Marysia on 12.04.2022.
//

#ifndef MYWORLD_WOLF_H
#define MYWORLD_WOLF_H
#include "Animal.h"

class Wolf: public Animal {
    void action() override;
    void colision() override;
    void draw() override;
public:
    Wolf(World& w);
};


#endif //MYWORLD_WOLF_H
