//
// Created by Marysia on 12.04.2022.
//

#ifndef MYWORLD_GUARAMA_H
#define MYWORLD_GUARAMA_H
#include "Plant.h"

class Guarama: public Plant {
    void action() override;
    void colision() override;
    void draw() override;
public:
    Guarama(World& w);
};


#endif //MYWORLD_GUARAMA_H
