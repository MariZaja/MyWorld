//
// Created by Marysia on 12.04.2022.
//

#ifndef MYWORLD_HOGWEED_H
#define MYWORLD_HOGWEED_H
#include "Plant.h"

class Hogweed: public Plant {
    void action() override;
    void colision() override;
    void draw() override;
public:
    Hogweed(World& w, int x, int y);
};


#endif //MYWORLD_HOGWEED_H
