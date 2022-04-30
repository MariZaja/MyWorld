//
// Created by Marysia on 30.04.2022.
//

#include "Commentator.h"

Commentator::Commentator() {
    count = 0;
    commentaries.clear();
    organizmName[0] = "Grass"; organizmName[1] = "Dandelion"; organizmName[2] = "Guarana"; organizmName[3] = "Wolf berries";
    organizmName[4] = "Hogweed"; organizmName[5] = "Wolf"; organizmName[6] = "Sheep";
    organizmName[7] = "Fox"; organizmName[8] = "Turtle"; organizmName[9] = "Antelope"; organizmName[10] = "Human";
}

void Commentator::addCommentary(int action, int winner, int loser) {
    std::string s = "";
    count++;
    switch (action){
        case 0:
            if (loser <= 4){
                s += organizmName[winner];
                s += " ate ";
                s += organizmName[loser];
                commentaries.push_back(s);
            }
            else{
                s += organizmName[winner];
                s += " killed ";
                s += organizmName[loser];
                commentaries.push_back(s);
            }
            break;
        case 1:
            s += "New ";
            s += organizmName[winner];
            s += " was born!";
            commentaries.push_back(s);
            break;
    }
}

void Commentator::print() {
    std::cout << count << std::endl;
    for (int i=0; i < count; i++){
        std::cout << commentaries[i] << std::endl;
    }
}

void Commentator::reset() {
    count = 0;
    commentaries.clear();
}
