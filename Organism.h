//
// Created by Marysia on 10.04.2022.
//

#ifndef MYWORLD_ORGANISM_H
#define MYWORLD_ORGANISM_H


class Organism {
    virtual void draw() const=0;
    virtual void action() const=0;
    virtual void colision() const=0;
protected:
    int initiative;
    int force;
    int organismX, organismY;
};


#endif //MYWORLD_ORGANISM_H
