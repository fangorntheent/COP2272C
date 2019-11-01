//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//OOP4
//November 1, 2019

#include "Oak.hpp"
#include <iostream>

Oak::Oak() {
    coverage = 420.69;
}

Oak::Oak(double c) {
    coverage = c;
}

Oak::Oak(double c, int age, double h) : Tree(age) {
    this->coverage = c;
}

double Oak::getCoverage() {
    return coverage;
}

void Oak::setCoverage(double c) {
    coverage = c;
}

void Oak::display() {
    Tree::display();
    std::cout << "This oak's canopy covers " << coverage << " square meters." << std::endl;
}

void Oak::produceAcorn() {
    std::cout << "OUCh! An acorn just fell from the sky and landed on your head." << std::endl;
}
