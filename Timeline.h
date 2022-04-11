//
// Created by Marysia on 10.04.2022.
//
#include "World.h"
#ifndef MYWORLD_TIMELINE_H
#define MYWORLD_TIMELINE_H


class Timeline {
    World* myWorld;
    int worldAge;
    void commentary();
public:
    Timeline();
    ~Timeline();
    void start();
};


#endif //MYWORLD_TIMELINE_H
