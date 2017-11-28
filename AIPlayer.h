//
// Created by noa on 16/11/17.
//

#ifndef EX3_AIPLAYER_H
#define EX3_AIPLAYER_H

#include "Player.h"

class AIPlayer : public Player {
public:
    AIPlayer(Cell :: Value value, GameLogic* logic);
    list<Coordinate> getOptionsList(Board *board);
    int bestOpponentChoice(Board *board, Cell:: Value opponentVal);
    virtual Coordinate doYourTurn(Board *board);
    /**
     * gets he choice.
     * @param optionsList - list of option cells.
     * @return the chosen coordinate.
     */
    virtual Cell ::Value getVal() const;
    /**
     * checks if the player has more moves.
     * @return boolean
     */
    virtual bool hasMoreMoves();

    virtual void movePasses();
    virtual void printChoice(Coordinate c);


private:
    Cell::Value value;
    GameLogic *logic;
    bool hasMove;

};


#endif //EX3_AIPLAYER_H
