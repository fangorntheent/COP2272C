//
//  Sunflower.cpp
//  OOP3LipkinG
//
//  Created by Gus Lipkin on 10/28/19.
//  Copyright © 2019 Gus Lipkin. All rights reserved.
//

#include "Sunflower.h"
#include <iostream>
using namespace std;

Sunflower::Sunflower() {
        numPetal = 100;
        stemLength = 8.0;
    }
Sunflower::Sunflower(int petal, double height) {
        numPetal = petal;
        stemLength = height;
    }

int Sunflower::getNumPetal() {
    return numPetal;
}

double Sunflower::getStemLength() {
    return stemLength;
}

void Sunflower::setNumPetal(int n) {
    numPetal = n;
}

void Sunflower::setStemLength(double n) {
    stemLength = n;
}

void Sunflower::display() {
    cout << "This sunflower is " << stemLength << " inches tall and has " << numPetal <<
        " petals." << endl;
}
void Sunflower::grow() {
    cout << "This hearty sunflower is growing well. Its seeds just might be ready for harvesting by baseball season." << endl;
}
