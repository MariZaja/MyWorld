#include <iostream>
#include "World.h"

int main() {
    int x,y;
    std::cout << "Set world width:";
    std::cin >> x;
    std::cout << "Set world height:";
    std::cin >> y;
    World myWorld(x, y);
    myWorld.start();
    return 0;
}
