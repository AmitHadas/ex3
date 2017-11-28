//
// Created by noa on 31/10/17.
//
/**
 * Noa or
 * 208385534
 */
#ifndef EX2_HUMANPLAYER_H
#define EX2_HUMANPLAYER_H

#include "Player.h"

class HumanPlayer: public Player {
public:
    /**
     * constructor
     * @param logic - the logic of the game.
     */
    HumanPlayer(Cell :: Value, GameLogic *logic);
    /**
     * the player chooses cell.
     * @param board - the board.
     * @return - the chosen coordinate.
     */
    virtual Coordinate doYourTurn(Board *board);
    /**
     * gets he choice.
     * @param optionsList - list of option cells.
     * @return the chosen coordinate.
     */
    Coordinate getChoice(list<Coordinate> optionsList) const;
    /**
     *
     * @return the player's value.
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
#endif //EX2_HUMANPLAYER_H
