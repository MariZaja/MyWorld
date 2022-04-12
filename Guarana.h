//
// Created by Marysia on 12.04.2022.
//

#ifndef MYWORLD_GUARANA_H
#define MYWORLD_GUARANA_H
#include "Plant.h"

class Guarana: public Plant {
    void action() override;
    void colision() override;
    void draw() override;
public:
    Guarana(World& w);
};


#endif //MYWORLD_GUARANA_H
