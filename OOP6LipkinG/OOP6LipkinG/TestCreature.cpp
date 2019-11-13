//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//OOP6
//November 13, 2019

#include <iostream>
using namespace std;

class Creature {
public:
    Creature() { }
    virtual void grow() {
        cout << "Creature class" << endl << "Grow method" << endl;
    }
};

class Animal : public Creature {
public:
    Animal() { }
    virtual void eat() {
        cout << "Animal class" << endl << "Eat method" << endl << endl;
    }
};

class Fish : public Animal {
public:
    Fish() { }
    void eat() {
        cout << "Fish class" << endl << "Eat method" << endl << endl;
    }
};

class Sardine : public Fish {
public:
    Sardine() { }
    void grow() {
        cout << "Sardine class" << endl << "Grow method" << endl << endl;
    }
};

class Mammal : public Animal {
public:
    Mammal() { }
    void grow() {
        cout << "Mammal class" << endl << "Grow method" << endl << endl;
    }
};

class Tiger : public Mammal {
public:
    Tiger() { }
    void grow() {
        cout << "Tiger class" << endl << "Grow method" << endl << endl;
    }
};

class Sheep : public Mammal {
public:
    Sheep() { }
    void eat() {
        cout << "Sheep class" << endl << "Eat method" << endl << endl;
    }
};

class Plant : public Creature {
public:
    Plant() { }
    virtual void photosynthesize() {
        cout << "Plant class" << endl << "Photosynthesize method" << endl << endl;
    }
};

class Tree : public Plant {
public:
    Tree() { }
};

class Willow : public Tree {
public:
    Willow() { }
    void grow() {
        cout << "Willow class" << endl << "Grow method" << endl << endl;
    }
};

class Grass : public Plant {
public:
    Grass() { }
    void grow() {
        cout << "Grass class" << endl << "Grow method" << endl << endl;
    }
};

void display(Creature& c1) {
    c1.grow();
}

int main() {
    Sardine sardine = Sardine();
    Sheep sheep = Sheep();
    Tiger tiger = Tiger();
    Willow willow = Willow();
    Grass grass = Grass();
    
    sardine.eat();
    sardine.grow();
    sheep.eat();
    sheep.grow();
    tiger.eat();
    tiger.grow();
    
    willow.photosynthesize();
    willow.grow();
    grass.photosynthesize();
    grass.grow();
    
    cout << "-----------------------" << endl;
    display(sardine);
    display(sheep);
    display(tiger);
    display(willow);
    display(grass);
    return 0;
}
