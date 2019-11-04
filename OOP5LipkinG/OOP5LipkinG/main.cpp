//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//OOP5
//November 4, 2019

#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "This is the Vehicle class constructor." << endl;
    }
};

class OnLand : public Vehicle {
public:
    OnLand() {
        cout << "This is the OnLand class constructor." << endl;
    }
};

class InAir : public Vehicle {
public:
    InAir() {
        cout << "This is the InAir class constructor." << endl;
    }
};

class Train : public OnLand {
public:
    Train() {
        cout << "This is the Train class constructor." << endl;
    }
};

class Car : public OnLand {
public:
    Car() {
        cout << "This is the Car class constructor." << endl;
    }
};

class Jet : public InAir {
public:
    Jet() {
        cout << "This is the Jet class constructor." << endl;
    }
};

class AirLiner : public Jet {
public:
    AirLiner() {
        cout << "This is the AirLiner class constructor." << endl;
    }
};

int main() {
    Vehicle();
    cout << endl;
    OnLand();
    cout << endl;
    InAir();
    cout << endl;
    Train();
    cout << endl;
    Car();
    cout << endl;
    Jet();
    cout << endl;
    AirLiner();
    cout << endl;
    
    //system("pause");
    return 0;
}
