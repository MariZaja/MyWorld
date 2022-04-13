//
// Created by Marysia on 10.04.2022.
//

#include "World.h"
#include "Plant.h"
#include "Grass.h"
#include "Dandelion.h"
#include "Guarana.h"
#include "WolfBerries.h"
#include "Hogweed.h"
#include "Wolf.h"
#include "Sheep.h"
#include "Fox.h"
#include "Turtle.h"
#include "Antelope.h"

#define START_NUMBER_OF_ORGANISMS 300
#define DIFFRENT_ORGANISMS 10
enum organismID {GRASS, DANDELION, GUARANA, WOLFBERRIES, HOGWEED, WOLF, SHEEP, FOX, TURTLE, ANTELOPE};

World::World(int x, int y)
    : worldX{ x }, worldY{ y }, worldAge{ 1 } {
    console = new Console;
    organisms = new Organism*[worldX*worldY];
    for(int i = 0; i < worldX*worldY; i++) {
        organisms[i] = NULL;
    }
    //human = new Human(*this, 0, 0);
    setArea();
    std::cout << "World created" << std::endl;
    //standardowe organizmy
}

World::~World(){
    delete[] organisms;
    std::cout << "World destroyed" << std::endl;
}

bool World::action() {
    if (console->readInstruction()) {
        //human->setDirection(console->getInstruction());
        //human->action();

        system("cls");

        std::cout << "World action" << std::endl;
        printArea();
    }
    else { return false; }
    return true;
}

void World::setArea() {
    srand (time(NULL));
    //organisms[0] = human;
    int x, y;
    for (int i = 0; i < START_NUMBER_OF_ORGANISMS; i++){
        x = rand() % worldX;
        y = rand() % worldY;
        if (organisms[x*worldY+y]==NULL){
            setNewOrganism(x, y, i%DIFFRENT_ORGANISMS);
        }
    }
}

void World::start() {
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
                std::cout << '-';
            }
            else{
                organisms[x*worldY+y]->draw();
            }
            std::cout << ' ';
        }
        std::cout << std::endl;
    }
}

void World::setNewOrganism(int x, int y, int number) {
    Organism* o;
    switch (number){
        case GRASS:
            o = new Grass(*this, x, y);
            break;
        case DANDELION:
            o = new Dandelion(*this, x, y);
            break;
        case GUARANA:
            o = new Guarana(*this, x, y);
            break;
        case WOLFBERRIES:
            o = new WolfBerries(*this, x, y);
            break;
        case HOGWEED:
            o = new Hogweed(*this, x, y);
            break;
        case WOLF:
            o = new Wolf(*this, x, y);
            break;
        case SHEEP:
            o = new Sheep(*this, x, y);
            break;
        case FOX:
            o = new Fox(*this, x, y);
            break;
        case TURTLE:
            o = new Turtle(*this, x, y);
            break;
        case ANTELOPE:
            o = new Antelope(*this, x, y);
            break;
    }
    organisms[x*worldY+y] = o;
}

void World::move(int fromX, int fromY, int toX, int toY) {
    if (organisms[toX*worldY+toY] == NULL){
        organisms[toX*worldY+toY] = organisms[fromX*worldY+fromY];
        organisms[fromX*worldY+fromY] = NULL;
    }
}

int World::getWorldX() {
    return worldX;
}

int World::getWorldY() {
    return worldY;
}
