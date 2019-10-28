//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//OOP3
//October 28, 2019

#include <iostream>
#include "Sunflower.h"
using namespace std;

int main() {
    Sunflower sunny = Sunflower();
    
    int petal;
    double height;
    cout << "Enter how many petals your sunflower has: ";
    cin >> petal;
    cout << "Enter the height of your sunflower in feet: ";
    cin >> height;
    Sunflower user = Sunflower(petal, height);
    
    
    
    //system("pause");
    return 0;
}
