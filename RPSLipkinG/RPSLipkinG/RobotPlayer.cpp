//
//  RobotPlayer.cpp
//  RPSLipkinG
//
//  Created by Gus Lipkin on 11/21/19.
//  Copyright © 2019 Gus Lipkin. All rights reserved.
//

#include "RobotPlayer.hpp"

RobotPlayer::RobotPlayer() {
    
}

void RobotPlayer::setThrow(int r, Game g) {
    if (r == 1)
        history[r] = (1 + rand() % 3);
    else if (g.getPrevRoundWinner() == 0)
            history[r] = g.winningThrow(history[r - 1]);
    else
        history[r] = g.losingThrow(history[r - 1]);
}
