//
// Created by Marysia on 11.04.2022.
//

#include "Animal.h"

Animal::Animal(World &w, int x, int y) : Organism(w, x, y) {

}

void Animal::action() {
    setDestination(1);
    if (world.checkPosition(toX, toY)){
        world.move(this->organismX, this->organismY, toX, toY);
    }
}
