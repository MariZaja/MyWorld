//
// Created by Marysia on 15.04.2022.
//

#ifndef MYWORLD_HUMAN_H
#define MYWORLD_HUMAN_H
#include "Animal.h"

class Human: public Animal {
    int direction;
    int powerDelay;
    void action() override;
    void draw() override;
public:
    Human(World &w, int x, int y);
    void setDirection(int d);
    void setPower(int p) override;
};

#endif //MYWORLD_HUMAN_H
