//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//OOP4
//November 1, 2019

#include "Plant.hpp"
#include <iostream>

Plant::Plant() {
    height = 5;
}

Plant::Plant(double h) {
    height = h;
}

double Plant::getHeight() {
    return height;
}

void Plant::setHeight(double h) {
    height = h;
}

void Plant::display() {
    std::cout << "The current height of the plant is: " << height << std::endl;
}
