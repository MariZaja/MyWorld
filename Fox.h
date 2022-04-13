//
// Created by Marysia on 12.04.2022.
//

#ifndef MYWORLD_FOX_H
#define MYWORLD_FOX_H
#include "Animal.h"

class Fox: public Animal {
    void action() override;
    void colision() override;
    void draw() override;
public:
    Fox(World& w, int x, int y);
};



#endif //MYWORLD_FOX_H
