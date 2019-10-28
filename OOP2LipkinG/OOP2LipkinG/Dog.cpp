//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//Array
//September 26, 2019

#include "Dog.h"
#include <cstdlib>
#include <iostream>
using namespace std;

Dog::Dog() {
    height = rand() % 100;
    weight = rand() % 50;
}

Dog::Dog(double h, double w) {
    height = h;
    weight = w;
}

void Dog::display() {
    cout << "The dog weighs " << weight << " kilograms and is " << height <<
        " centimeters tall." << endl;
}

void Dog::bark() {
    if(height < 50 && weight < 25)
        cout << "The small dog's bark sounds like an angry squirrel." << endl;
    else
        cout << "The big dog's bark shakes the neighborhood." << endl;
}
