//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//OOP4
//November 1, 2019

#pragma once
#ifndef Tree_hpp
#define Tree_hpp

#include <stdio.h>

#endif /* Tree_hpp */

#include "Plant.hpp"

class Tree : public Plant {
private:
    int age;
public:
    Tree();
    Tree(int a);
    Tree(int a, double h);
    
    int getAge();
    void setAge(int a);
    
    void display();
    void grow();
};
