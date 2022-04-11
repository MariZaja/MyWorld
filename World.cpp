//
// Created by Marysia on 10.04.2022.
//

#include "World.h"

World::World(int worldX, int worldY)
    : worldX{ worldX }, worldY{ worldY } {
    std::cout << "World created" << std::endl;
    //standardowe organizmy
}

World::~World(){
    std::cout << "World destroyed" << std::endl;
}

bool World::action() {
    if (i==0){
        std::cout << "World action" << std::endl;
        i++;
    }
    else { return false; }
    return true;
}
