//
//  Game.hpp
//  RPSLipkinG
//
//  Created by Gus Lipkin on 11/21/19.
//  Copyright © 2019 Gus Lipkin. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include <iostream>

#endif /* Game_hpp */

class Game {
public:
    int round;
    int roundMax;
    int winHistory[100];
    
    Game();
    Game(int rMax);
    
    int getPrevRoundWinner();
    int winningThrow(int t);
    int losingThrow(int t);
    
    void winRound(int a, int b);
    void winGame(int a, int b);
};
