//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//OOP2
//October 28, 2019

#include <iostream>
#include "Dog.h"
using namespace std;

int main() {
    Dog progDog = Dog();
    progDog.display();
    progDog.bark();
    
    double h, w;
    cout << endl << "Enter the height of your dog in cm: ";
    cin >> h;
    cout << "Enter the weight of your dog in kg: ";
    cin >> w;
    cout << endl;
    
    Dog userDog = Dog(h, w);
    userDog.display();
    userDog.bark();
    
    cout << endl;
    //system("pause");
    return 0;
}
