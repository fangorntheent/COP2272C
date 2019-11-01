//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//OOP4
//November 1, 2019

#include "Tree.hpp"
#include <iostream>

Tree::Tree() : Plant() {
    age = 5;
}

Tree::Tree(int a) : Plant() {
    age = a;
}
Tree::Tree(int a, double height) : Plant(height) {
    this->age = a;
}

int Tree::getAge() {
    return age;
}

void Tree::setAge(int a) {
    age = a;
}

void Tree::display() {
    std::cout << "This tree is " << age << " years old and " << this->getHeight() << " feet tall." << std::endl;
}
void Tree::grow() {
    std::cout << "This tree is growing well, but it appears to be a crab apple tree." << std::endl;
}
