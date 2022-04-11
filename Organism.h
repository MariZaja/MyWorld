//
// Created by Marysia on 10.04.2022.
//

#ifndef MYWORLD_ORGANISM_H
#define MYWORLD_ORGANISM_H


class Organism {
    int force;
    int initiative;
    int organismX, organismY;
    virtual void draw() const=0;
    virtual void action();
    virtual void colision();
};


#endif //MYWORLD_ORGANISM_H
