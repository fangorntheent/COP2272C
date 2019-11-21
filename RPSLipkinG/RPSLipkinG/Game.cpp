//
//  Game.cpp
//  RPSLipkinG
//
//  Created by Gus Lipkin on 11/21/19.
//  Copyright © 2019 Gus Lipkin. All rights reserved.
//

#include "Game.hpp"

Game::Game() {
    round = 1;
    roundMax = 100;
    for (int i = 0; i < 100; i++)
        winHistory[i] = -1;
}

Game::Game(int rMax) {
    round = 1;
    roundMax = rMax;
    for (int i = 0; i < rMax; i++)
        winHistory[i] = -1;
}

int Game::getPrevRoundWinner() {
    return winHistory[round - 1];
}

int Game::winningThrow(int t) {
    switch (t) {
        case 1:
            return 2;
            break;
        case 2:
            return 3;
            break;
        case 3:
            return 1;
        default:
            return -1;
            break;
    }
}

int Game::losingThrow(int t) {
    switch (t) {
        case 1:
            return 2;
            break;
        case 2:
            return 3;
            break;
        case 3:
            return 1;
            break;
        default:
            return -1;
            break;
    }
}

void Game::winRound(int a, int b) {
    if (a == winningThrow(b))
        winHistory[round] = 0;
    else
        winHistory[round] = 1;
}

void Game::winGame(int a, int b) {
    int personCount = 0, robotCount = 0;
    for (int i = 0; i < roundMax; i++) {
        if (winHistory[i] == 0)
            personCount++;
        else
            robotCount++;
    }
    if (personCount > robotCount)
        std::cout << "You win!";
    else
        std::cout << "The computer wins!";
}
