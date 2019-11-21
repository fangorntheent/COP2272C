//
//  Player.hpp
//  RPSLipkinG
//
//  Created by Gus Lipkin on 11/21/19.
//  Copyright © 2019 Gus Lipkin. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>

#endif /* Player_hpp */

class Player {
public:
    int history[100];
    
    Player();
    
    int charToNum(char t);
    char intToChar(int t);
    void viewHistory();
};
