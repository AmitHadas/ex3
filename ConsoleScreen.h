//
// Created by noa on 05/11/17.
//
/**
 * Noa or
 * 208385534
 */
#ifndef EX2_CONSOLESCREEN_H
#define EX2_CONSOLESCREEN_H


#include "Board.h"
#include "Screen.h"

class ConsoleScreen : public Screen{
public:
    /**
     * the function shows the screen.
     * @param board - the board.
     */
    virtual void showBoard(Board *board);
    /**
     * the function counts the number of X's and O's and
     * @param board
     */
    virtual void gameOverScreen(Board *board);


};


#endif //EX2_CONSOLESCREEN_H
