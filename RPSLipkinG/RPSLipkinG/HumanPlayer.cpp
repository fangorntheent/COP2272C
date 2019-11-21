//
//  HumanPlayer.cpp
//  RPSLipkinG
//
//  Created by Gus Lipkin on 11/21/19.
//  Copyright © 2019 Gus Lipkin. All rights reserved.
//

#include "HumanPlayer.hpp"

HumanPlayer::HumanPlayer() : Player() {
    
}

void HumanPlayer::setThrow(int r, char t) {
    history[r] = charToNum(t);
}
