#include <iostream>
#include "World.h"

int main() {
    World myWorld;
    myWorld.start();
    std::cout << "The end\n";
    std::cout << "Press 'q' to quit game\n";
    char pressed = ' ';
    while(pressed != 'q'){
        std::cin >> pressed;
    }
    return 0;
}
