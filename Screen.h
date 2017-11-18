//
// Created by noa on 05/11/17.
//
/**
 * Noa or
 * 208385534
 */

#ifndef EX2_SCREEN_H
#define EX2_SCREEN_H


#include "Board.h"

class Screen {
public:
    /**
     * the function shows the screen.
     * @param board - the board.
     */
    virtual void showBoard(Board *board) = 0;
/**
 * prints the winner value.
 * @param board - the board.
 */
    virtual void gameOverScreen(Board *board) = 0;
};


#endif //EX2_SCREEN_H
