//
// Created by Marysia on 10.04.2022.
//

#include "World.h"
#include "Organism.h"
#include "Plant.h"
#include "Grass.h"

World::World(int x, int y)
    : worldX{ x }, worldY{ y }, worldAge{ 1 } {
    organisms = new Organism*[worldX*worldY];
    for(int i = 0; i < worldX*worldY; i++) {
        organisms[i] = NULL;
    }
    setArea();
    std::cout << "World created" << std::endl;
    //standardowe organizmy
}

World::~World(){
    delete[] organisms;
    std::cout << "World destroyed" << std::endl;
}

bool World::action() {
    if (slowo==0){
        std::cout << "World action" << std::endl;
        slowo++;
    }
    else { return false; }
    printArea();
    return true;
}

void World::setArea() {
    Organism* g = new Grass(*this);
    organisms[0] = organisms[2] = organisms[6] = organisms[8] = g;
}

void World::start() {
    std::cout<<"action" << slowo << std::endl;
    while(action()) {
        commentary();
        worldAge++;
    }
}

void World::commentary() {
    for (int i=0; i<24; i++){
        std::cout << "*";
    }
    std::cout << '\n' << "komentarz" << std::endl;
    for (int i=0; i<24; i++){
        std::cout << "*";
    }
    std::cout << std::endl;
}

void World::printArea() {
    for (int y=0; y<worldY; y++){
        for (int x=0; x<worldX; x++){
            if (organisms[x*worldY+y]==NULL){
                std::cout << 'o';
            }
            else{
                organisms[x*worldY+y]->draw();
            }
        }
        std::cout << std::endl;
    }
}
