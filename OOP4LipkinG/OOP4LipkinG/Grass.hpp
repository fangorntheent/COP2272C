//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//OOP4
//November 1, 2019

#ifndef Grass_hpp
#define Grass_hpp

#include <stdio.h>

#endif /* Grass_hpp */

#include "Plant.hpp"

class Grass : public Plant {
private:
    int leafNum;
public:
    Grass();
    Grass(int n);
    Grass(int n, double h);
    
    int getLeafNum();
    void setLeafNum(int l);
    
    void display();
    void bloom();
};
