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
//#include "Screen.h"

class Screen;

///// interface and ask if i should have the cpp file or not
class Player {
public:
/**
     * the player chooses cell.
     * @param board - the board.
     * @return - the chosen coordinate.
     */
    virtual Coordinate doYourTurn(Board *board, Screen *screen) = 0;
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
    /**
     * The function handles the case that the player had no moves.
     * @param screen - the screen to show that he has no moves.
     */
    virtual void movePasses(Screen *screen, char value) = 0;
    /**
     * The function shows what the player chose.
     * @param c - the chosen coordinate.
     * @param screen - the screen.
     */
    virtual void showChoice(Coordinate c, Screen *screen)  const = 0;

    virtual char valueToChar(Cell::Value val) const;

private:
    Cell :: Value value;
    GameLogic *logic;
    bool hasMove;
};


#endif //EX2_PLAYER_H
