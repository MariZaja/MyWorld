//
// Created by Marysia on 13.04.2022.
//

#ifndef MYWORLD_HUMAN_H
#define MYWORLD_HUMAN_H
#include "Animal.h"
//enum direction_e {UP_D, RIGHT_D, DOWN_D, LEFT_D};

class Human: public Animal {
    int direction;
public:
    Human(World& w, int x, int y);
    void setDirection(int d);
    void action();
    void colision();
    void draw();
};



#endif //MYWORLD_HUMAN_H
