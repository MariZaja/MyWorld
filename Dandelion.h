//
// Created by Marysia on 12.04.2022.
//

#ifndef MYWORLD_DANDELION_H
#define MYWORLD_DANDELION_H
#include "Plant.h"

class Dandelion: public Plant {
    void action() override;
    void colision() override;
    void draw() override;
public:
    Dandelion(World& w);
};


#endif //MYWORLD_DANDELION_H
