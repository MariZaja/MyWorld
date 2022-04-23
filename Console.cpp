#include "Console.h"

bool Console::readInstruction() {
    int ch = _getch();
    if (ch == 224) {
        ch = _getch();
        switch (ch) {
            case KB_UP:
                instruction = UP;
                return true;
            case KB_DOWN:
                instruction = DOWN;
                return true;
            case KB_RIGHT:
                instruction = RIGHT;
                return true;
            case KB_LEFT:
                instruction = LEFT;
                return true;
        }
    }
    else if (ch == ESC)
    {
        return false;
    }
}

int Console::getInstruction() {
    return instruction;
}