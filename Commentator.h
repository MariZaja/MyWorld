//
// Created by Marysia on 30.04.2022.
//

#ifndef MYWORLD_COMMENTATOR_H
#define MYWORLD_COMMENTATOR_H
#include <iostream>
#include <vector>
#include <string>

class Commentator {
    int count;
    std::vector< std::string > commentaries;
    std::string organizmName[11];
public:
    Commentator();
    void addCommentary(int action, int winner, int loser);
    void print();
    void reset();
};


#endif //MYWORLD_COMMENTATOR_H
