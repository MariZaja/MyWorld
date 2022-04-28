//
// Created by Marysia on 12.04.2022.
//

#include "Antelope.h"

Antelope::Antelope(World &w, int x, int y) : Animal(w, x, y) {
    force = 4;
    initiative = 4;
    ID = 9;
}

void Antelope::action() {
    setDestination(2);
    if (world.checkPosition(toX, toY)){
        world.move(this->organismX, this->organismY, toX, toY);
    }
}

bool Antelope::collision(Organism *o) {
    int run = rand() % 2;
    int a = -1, b = -1;
    if (run){
        while(a<2){
            while(b<2){
                int target = (organismX+a)*world.getWorldY()+(organismY+b);
                if (world.checkPosition(organismX+a, organismY+b)){
                    if (world.organisms[target] == NULL){
                        world.move(organismX, organismY,organismX+a, organismY+b);
                    }
                }b++;
            }b--;
            a++;
        }
        return true;
    }
    return Organism::collision(o);
}

void Antelope::draw() {
    std::cout << 'a';
}

void Antelope::setDirection(int d) {

}
