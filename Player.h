//
// Created by noa on 31/10/17.
//
/**
 * Noa or
 * 208385534
 */
#ifndef EX2_PLAYER_H
#define EX2_PLAYER_H

#include "Coordinate.h"
#include "Cell.h"
#include "GameLogic.h"
///// interface and ask if i should have the cpp file or not
class Player {
public:
/**
     * the player chooses cell.
     * @param board - the board.
     * @return - the chosen coordinate.
     */
    virtual Coordinate doYourTurn(Board *board) = 0;
    /**
     * gets he choice.
     * @param optionsList - list of option cells.
     * @return the chosen coordinate.
     */
    virtual Cell ::Value getVal() const = 0;
    /**
     * checks if the player has more moves.
     * @return boolean
     */
    virtual bool hasMoreMoves() = 0;

private:
    Cell :: Value value;
    GameLogic *logic;
    bool hasMove;
};


#endif //EX2_PLAYER_H
