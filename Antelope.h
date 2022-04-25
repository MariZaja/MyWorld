//
// Created by Marysia on 12.04.2022.
//

#ifndef MYWORLD_ANTELOPE_H
#define MYWORLD_ANTELOPE_H
#include "Animal.h"

class Antelope: public Animal {
    void action() override;
    void draw() override;
    void setDirection(int d) override;
public:
    Antelope(World& w, int x, int y);
};


#endif //MYWORLD_ANTELOPE_H
