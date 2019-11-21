//
//  RobotPlayer.hpp
//  RPSLipkinG
//
//  Created by Gus Lipkin on 11/21/19.
//  Copyright © 2019 Gus Lipkin. All rights reserved.
//
#pragma once
#ifndef RobotPlayer_hpp
#define RobotPlayer_hpp

#include <stdio.h>
#include <cstdlib>

#endif /* RobotPlayer_hpp */
#include "Player.hpp"
#include "Game.hpp"

class RobotPlayer : public Player {
public:
    RobotPlayer();
    
    void setThrow(int r, Game g);
};
