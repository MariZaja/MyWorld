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
public:
    WolfBerries(World& w);
};


#endif //MYWORLD_WOLFBERRIES_H
