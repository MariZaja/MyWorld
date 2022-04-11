//
// Created by Marysia on 11.04.2022.
//
#ifndef MYWORLD_GOD_H
#define MYWORLD_GOD_H
#include <iostream>
#include "Organism.h"
#include <string>

class God {
protected:
    virtual void Wypisz(Organism o, int x, int y) const = 0;
    virtual int random(int mod);
public:
    virtual ~God();
};


#endif //MYWORLD_GOD_H
