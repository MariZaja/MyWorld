//
// Created by Marysia on 10.04.2022.
//

#include "World.h"
#include "Human.h"
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


#define START_NUMBER_OF_ORGANISMS 100
#define DIFFRENT_ORGANISMS 10
enum organismID {GRASS, DANDELION, GUARANA, WOLFBERRIES, HOGWEED, WOLF, SHEEP, FOX, TURTLE, ANTELOPE};

World::World()
    : worldAge{ 1 } {
    srand (time(NULL));
    end = false;
    console = new Console;
    organisms = new Organism*[worldX*worldY];
    h = new Human(*this, 0, 0);
    organismsIniciative[h->getInitiative()].push_back(h);
    for(int i = 0; i < worldX*worldY; i++) {
        organisms[i] = NULL;
    }
    else{ load(); }
    std::cout << "World created" << std::endl;
    //standardowe organizmy
}

World::~World(){
    delete h;
    delete console;
    delete[] organisms;
    std::cout << "World destroyed" << std::endl;
}

bool World::action() {
    if (end){return false;}
    if (worldAge == 1){
        system("cls");
        printArea();
        return true;
    }
    if (console->readInstruction()) {
        if (console->getInstruction() == 4) { save(); }
        else { h->setDirection(console->getInstruction()); }
        h->setPower(console->getPower());

        system("cls");

        for (int i=MAX_INITIATIVE-1; i>=0; i--){
            int size = organismsIniciative[i].size();
            for (int j=0; j<size; j++){
                organismsIniciative[i][j]->action();
            }
        }

        printArea();
    }
    else { return false; }
    return true;
}

void World::setArea() {
    organisms[0] = h;
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
    std::cout << '\n' << "sila: " << h->getForce() << std::endl;
    std::cout << '\n' << "kierunek: " << console->getInstruction() << std::endl;
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
    organismsIniciative[o->getInitiative()].push_back(o);
}

void World::move(int fromX, int fromY, int toX, int toY) {
    int from = fromX*worldY+fromY;
    int to = toX*worldY+toY;
    if (organisms[to] == NULL && checkPosition(toX, toY) && organisms[from] != NULL){
        organisms[to] = organisms[from];
        organisms[from] = NULL;
        organisms[to]->setPosition(toX, toY);
    }
    else if(organisms[to] != NULL && checkPosition(toX, toY)){
        if (!organisms[to]->collision(organisms[from])){
            move(fromX, fromY, toX, toY);
        }
    }
}

int World::getWorldX() {
    return worldX;
}

int World::getWorldY() {
    return worldY;
}

bool World::checkPosition(int x, int y) {
    if(x < 0 || y < 0 || x >= worldX || y >= worldY){return false;}
    return true;
}

int World::getAge() {
    return worldAge;
}

void World::deleteOrganism(int x, int y) {
    int initiative = organisms[x*worldY+y]->getInitiative();
    for (std::vector <Organism*>::iterator i = this->organismsIniciative[initiative].begin(); i < this->organismsIniciative[initiative].end();i++){
        if (*i == organisms[x*worldY+y]){
            if (*i == h){end = true;}
            organismsIniciative[initiative].erase(i);
        }
    }
    organisms[x*worldY+y] = NULL;
}

void World::save() {
    std::fstream file;
    std::cout << "Podan nazwe pliku:\n";
    std::string name;
    std::cin>>name;
    file.open(name, std::ios::out | std::ios::trunc);
    file << this->worldAge<<"\n";
    file << this->worldX << " " << this->worldY << "\n";
    for (int i = 0; i < this->worldX*this->worldY; i++)
    {
        if (this->organisms[i] != NULL)
        {
            file << this->organisms[i]->getID() << " ";
            file << this->organisms[i]->getAge() << " ";
            file << this->organisms[i]->getForce() << " ";
            file << this->organisms[i]->getInitiative() << " ";
            //if (this->organisms[i] == this->h)file << this->h->getPowerDelay() << " ";
            file << "\n";
        }
        else
        {
            file << "0\n";
        }
    }
    file.close();
}

void World::load() {

}
