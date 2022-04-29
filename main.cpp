#include <iostream>
#include "World.h"

int main() {
    World myWorld;
    myWorld.start();
    std::cout << "The end\n";
    std::cout << "Click 'q' to quit game\n";
    char com = ' ';
    while(com != 'q'){
        std::cin >> com;
    }
    return 0;
}
