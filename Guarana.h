//
// Created by Marysia on 12.04.2022.
//

#ifndef MYWORLD_GUARANA_H
#define MYWORLD_GUARANA_H
#include "Plant.h"

class Guarana: public Plant {
    bool collision(Organism* o) override;
    void draw() override;
    void setDirection(int d) override;
public:
    Guarana(World& w, int x, int y);
};


#endif //MYWORLD_GUARANA_H
