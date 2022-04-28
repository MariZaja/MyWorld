#pragma once
//
// Created by Marysia on 13.04.2022.
//
#ifndef MYWORLD_CONSOLE_H
#define MYWORLD_CONSOLE_H
#include <iostream>
#include <conio.h>

const int KB_UP = 72;
const int KB_DOWN = 80;
const int KB_RIGHT = 77;
const int KB_LEFT = 75;
const int ESC = 27;
enum direction{UP, RIGHT, DOWN, LEFT};

class Console {
    int instruction;
    int power;
public:
    Console();
    int getPower();
    int getInstruction();
    bool readInstruction();
};


#endif //MYWORLD_CONSOLE_H