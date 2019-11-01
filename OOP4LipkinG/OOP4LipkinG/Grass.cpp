//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//OOP4
//November 1, 2019

#include "Plant.hpp"
#include "Grass.hpp"
#include <iostream>

Grass::Grass() {
    leafNum = 100;
}

Grass::Grass(int l) {
    leafNum = l;
}

Grass::Grass(int l, double height) : Plant(height) {
    this->leafNum = l;
}

int Grass::getLeafNum() {
    return leafNum;
}

void Grass::setLeafNum(int l) {
    leafNum = l;
}

void Grass::display() {
    Plant::display();
    std::cout << "This is some leafy grass! There are " << leafNum << " blades." << std::endl;
}
void Grass::bloom() {
    std::cout << "This grass is blooming well on a remote mountainside." << std::endl;
}
