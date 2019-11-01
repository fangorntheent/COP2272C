//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//OOP4
//November 1, 2019

#ifndef Plant_hpp
#define Plant_hpp

#include <stdio.h>

#endif /* Plant_hpp */

class Plant {
private:
    double height;
public:
    Plant();
    Plant(double h);
    
    double getHeight();
    
    void setHeight(double h);
    
    void display();
};
