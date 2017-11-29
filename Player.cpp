//
// Created by noa on 31/10/17.
//

#include "Player.h"

char Player::valueToChar(Cell::Value val) const {
    if (val == Cell::O) {
        return 'O';
    } else if (val == Cell::X){
        return 'X';
    }
    return ' ';
}