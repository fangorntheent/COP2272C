//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//OOP4
//November 1, 2019

#pragma once
#ifndef Oak_hpp
#define Oak_hpp

#include <stdio.h>

#endif /* Oak_hpp */

#include "Tree.hpp"

class Oak : public Tree {
private:
    double coverage;
public:
    Oak();
    Oak(double c);
    Oak(double c, int a, double h);
    
    double getCoverage();
    void setCoverage(double c);
    
    void display();
    void produceAcorn();
};
