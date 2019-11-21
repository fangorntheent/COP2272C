//
//  Player.cpp
//  RPSLipkinG
//
//  Created by Gus Lipkin on 11/21/19.
//  Copyright © 2019 Gus Lipkin. All rights reserved.
//

#include "Player.hpp"
#include <iostream>

Player::Player() {
    for(int i = 0; i < 100; i++)
        history[i] = 0;
}

char Player::intToChar(int t) {
    switch (t) {
        case 1:
            return 'R';
            break;
        case 2:
            return 'P';
            break;
        case 3:
            return 'S';
            break;
        default:
            return 'e';
            break;
    }
}

int Player::charToNum(char t) {
    switch (t) {
        case 'r':
        case 'R':
            return 1;
            break;
        case 'p':
        case 'P':
            return 2;
        case 's':
        case 'S':
            return 3;
        default:
            return 0;
            break;
    }
}

void Player::viewHistory() {
    int i = 0;
    while (i != -1) {
        std::cout << intToChar(history[i]) << ", ";
        i++;
    }
}
