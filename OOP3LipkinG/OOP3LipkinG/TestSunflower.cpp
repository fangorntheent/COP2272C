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
    
    Sunflower sunArray[2] = {sunny, user};
    
    cout << endl << "We will now discuss the sunflowers in your garden." << endl << endl;
    
    for(int i = 0; i < 2; i++) {
        cout << "This sunflower currently has " << sunArray[i].getNumPetal() <<
            " petals and is " << sunArray[i].getStemLength() << " feet high." << endl;
        cout << "Please enter a new petal count for this sunflower: ";
        cin >> petal;
        cout << "Please enter a new height for this sunflower in feet: ";
        cin >> height;
        
        sunArray[i].setNumPetal(petal);
        sunArray[i].setStemLength(height);
        
        sunArray[i].display();
        sunArray[i].grow();
        
        cout << endl;
    }
    
    //system("pause");
    return 0;
}
