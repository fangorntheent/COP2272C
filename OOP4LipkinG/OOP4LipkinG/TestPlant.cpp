//Gus Lipkin
//COP 2272C 01
//Computer Programming 1
//OOP4
//November 1, 2019

#include <iostream>
#include "Plant.hpp"
#include "Tree.hpp"
#include "Oak.hpp"
#include "Grass.hpp"


using namespace std;

int getInt() {
    int i;
    cout << "Please enter an integer: ";
    cin >> i;
    return i;
}

double getDouble() {
    double i;
    cout << "Please enter a double: ";
    cin >> i;
    return i;
}

int main() {
    //get
    //set
    //display
    //other
    
    Plant plant1 = Plant();
    Plant plant2 = Plant(42.0);
    
    Tree tree1 = Tree();
    Tree tree2 = Tree(42);
    Tree tree3 = Tree(42, 6.9);
    
    Oak oak1 = Oak();
    Oak oak2 = Oak(6.9);
    Oak oak3 = Oak(6.9, 42, 12.3);
    
    Grass grass1 = Grass();
    Grass grass2 = Grass(42);
    Grass grass3 = Grass(42, 6.9);
    
    cout << "The plants are " << plant1.getHeight() << " and " << plant2.getHeight() <<
        " feet tall." << endl;
    cout << "We will now set the plant's height. " << endl;
    plant1.setHeight(getDouble());
    plant2.setHeight(getDouble());
    cout << endl;
    
    cout << "The trees are " << tree1.getAge() << ", " << tree2.getAge() <<
        ", and " << tree3.getAge() << " years old." << endl;
    cout << "The trees are " << tree1.getHeight() << ", " << tree2.getHeight() <<
        ", and " << tree3.getHeight() << " feet tall." << endl;
    cout << "We will now set the tree's age." << endl;
    tree1.setAge(getInt());
    tree2.setAge(getInt());
    tree3.setAge(getInt());
    cout << "We will now set the tree's height." << endl;
    tree1.setHeight(getDouble());
    tree2.setHeight(getDouble());
    tree3.setHeight(getDouble());
    cout << endl;
    
    cout << "The oaks' foliage are " << oak1.getCoverage() << ", " << oak2.getCoverage() <<
        ", and " << oak3.getCoverage() << " meters in diameter." << endl;
    cout << "The oaks are " << oak1.getAge() << ", " << oak2.getAge() <<
        ", and " << oak3.getAge() << " years old." << endl;
    cout << "The oaks are " << oak1.getHeight() << ", " << oak2.getHeight() <<
        ", and" << oak3.getHeight() << " feet tall." << endl;
    cout << "We will now set the oak's coverage." << endl;
    oak1.setCoverage(getDouble());
    oak2.setCoverage(getDouble());
    oak3.setCoverage(getDouble());
    cout << "We will now set the oak's age." << endl;
    oak1.setAge(getInt());
    oak2.setAge(getInt());
    oak3.setAge(getInt());
    cout << "We will now set the oak's height." << endl;
    oak1.setHeight(getDouble());
    oak2.setHeight(getDouble());
    oak3.setHeight(getDouble());
    cout << endl;
    
    cout << "There are " << grass1.getLeafNum() << ", " << grass2.getHeight() <<
        ", and " << grass3.getLeafNum() << " blades of grass." << endl;
    cout << "The grasses are " << grass1.getHeight() << ", " << grass2.getHeight() <<
        ", and " << grass3.getHeight() << " feet tall." << endl;
    cout << "We will now set the number of blades of grass." << endl;
    grass1.setLeafNum(getInt());
    grass2.setLeafNum(getInt());
    grass3.setLeafNum(getInt());
    cout << "We will now set the height of the grass." << endl;
    grass1.setHeight(getDouble());
    grass2.setHeight(getDouble());
    grass3.setHeight(getDouble());
    cout << endl;
    
    cout << endl;
    plant1.display();
    plant2.display();
    
    cout << endl;
    tree1.display();
    tree2.display();
    tree3.display();
    
    cout << endl;
    oak1.display();
    oak2.display();
    oak3.display();
    
    cout << endl;
    grass1.display();
    grass2.display();
    grass3.display();
    
    cout << endl;
    tree1.grow();
    tree2.grow();
    tree3.grow();
    
    cout << endl;
    oak1.produceAcorn();
    oak2.produceAcorn();
    oak3.produceAcorn();
    
    cout << endl;
    grass1.bloom();
    grass2.bloom();
    grass3.bloom();
    
    //system("pause");
    return 0;
}
