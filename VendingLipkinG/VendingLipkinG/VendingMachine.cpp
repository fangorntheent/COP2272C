//
//  VendingMachine.cpp
//  VendingLipkinG
//
//  Created by Gus Lipkin on 11/21/19.
//  Copyright © 2019 Gus Lipkin. All rights reserved.
//

#pragma once
#include "VendingMachine.hpp"
#include <string>

class VendingMachine {
private:
    int bankLevel;
public:
    int inputPanel[5][5];
    std::string status;
    std::string errorMessage;
    
    VendingMachine();
    VendingMachine(int b);
    
    void pay(int c);
    void displayBankLevel();
    void cost(int i);
    void selectItem(int x, int y);
    void readDisplay();
};
