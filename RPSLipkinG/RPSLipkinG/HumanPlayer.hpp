//
//  HumanPlayer.hpp
//  RPSLipkinG
//
//  Created by Gus Lipkin on 11/21/19.
//  Copyright © 2019 Gus Lipkin. All rights reserved.
//
#pragma once
#ifndef HumanPlayer_hpp
#define HumanPlayer_hpp

#include <stdio.h>

#endif /* HumanPlayer_hpp */
#include "Player.hpp"

class HumanPlayer : public Player {
public:
    HumanPlayer();
    
    void setThrow(int r, char t);
};
