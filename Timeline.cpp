//
// Created by Marysia on 10.04.2022.
//
#include <iostream>
#include "Timeline.h"

Timeline::Timeline() {
    myWorld = new World (5,6);
    worldAge = 1;
}

Timeline::~Timeline() {
    delete myWorld;
}

void Timeline::start() {
    while(myWorld->action()) {
        commentary();
        worldAge++;
    }
}

void Timeline::commentary() {
    for (int i=0; i<24; i++){
        std::cout << "*";
    }
    std::cout << '\n' << "komentarz" << std::endl;
    for (int i=0; i<24; i++){
        std::cout << "*";
    }
    std::cout << std::endl;
}