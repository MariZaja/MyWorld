//
// Created by Marysia on 15.04.2022.
//

#ifndef MYWORLD_HUMAN_H
#define MYWORLD_HUMAN_H
#include "Animal.h"

class Human: public Animal {
    int direction;
    int tempForce;
    int powerDelay;
    void action() override;
    void draw() override;
public:
    Human(World &w, int x, int y);
    void forceBoost(int f) override;
    void setDirection(int d);
    void setPower(int p);
};

#endif //MYWORLD_HUMAN_H
