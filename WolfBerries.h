//
// Created by Marysia on 12.04.2022.
//

#ifndef MYWORLD_WOLFBERRIES_H
#define MYWORLD_WOLFBERRIES_H
#include "Plant.h"

class WolfBerries: public Plant {
    void action() override;
    void colision() override;
    void draw() override;
    void setDirection(int d) override;
public:
    WolfBerries(World& w, int x, int y);
};


#endif //MYWORLD_WOLFBERRIES_H
