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
    virtual Coordinate doYourTurn(Board *board, Screen *screen);
    /**
     * gets he choice.
     * @param optionsList - list of option cells.
     * @return the chosen coordinate.
     */
    Coordinate getChoice(list<Coordinate> optionsList, Screen *screen) const;
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
    /**
     * The function handles the case that the player had no moves.
     * @param screen - the screen to show that he has no moves.
     */
    virtual void movePasses(Screen *screen, char value);
    /**
     * The function shows what the player chose.
     * @param c - the chosen coordinate.
     * @param screen - the screen.
     */
    virtual void showChoice(Coordinate c, Screen *screen) const;

private:
    Cell::Value value;
    GameLogic *logic;
    bool hasMove;

};
#endif //EX2_HUMANPLAYER_H
