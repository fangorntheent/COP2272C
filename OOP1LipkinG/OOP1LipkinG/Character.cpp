//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//OOP1
//October 17, 2019

#include <iostream>
#include <string>
using namespace std;

class Character {
public:
        string name;
        int lifeNum;
    
    Character() {
        name = "John Doe";
        lifeNum = 5;
    }
    Character(string nombre, int num) {
        name = nombre;
        lifeNum = num;
    }
    
    void display() {
        cout << endl << "The name of the character is: " << name << "." << endl;
        cout << name << " has " << lifeNum << " live(s) left." << endl;
    }
    void damage(int i) {
        lifeNum -= i;
        if(lifeNum < 0)
            lifeNum = 0;
    }
    
};

int main() {
    string x;
    int y, lives1, lives2;
    
    Character person1;
    person1 = Character();
    person1.display();
    
    Character person2;
    cout << endl << "Please enter the name of the second character: ";
    cin >> x;
    cout << "Please enter the number of lives this character has: ";
    cin >> y;
    person2 = Character(x, y);
    
    cout << endl << "How many lives should " << person1.name << " lose? ";
    cin >> lives1;
    cout << "How many lives should " << person2.name << " lose? ";
    cin >> lives2;
    
    person1.damage(lives1);
    person2.damage(lives2);
    
    person1.display();
    person2.display();
    cout << endl;
    
    //system("pause");
    return 0;
}
