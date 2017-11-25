//
// Created by noa on 30/10/17.
//
/**
 * Noa or
 * 208385534
 */
#ifndef EX2_BOARD_H
#define EX2_BOARD_H

#include <iostream>
#include "Cell.h"
#include "Coordinate.h"
#include "GameLogic.h"
class GameLogic;
using namespace std;

class Board {
public:
/**
 * constructor
 * @param rowSize - number of rows.
 * @param colSize - number od columns.
 * @param logic - the logic of the game.
 */
    Board(int rowSize, int colSize, GameLogic *logic);

    Board(Board &b);
/**
 * This function shows the boars in the console game.
 */
    void showBoard();

/**
 * this function needs to flip all the cells in the
 * list and show the board again.
 * @param coordinate - the player's choice.
 * @param changedTo - the player's value.
 */
    void updateBoard(Coordinate coordinate, Cell :: Value changedTo);
/**
 *
 * @return number of columns.
 */
    int getColSize();
/**
 *
 * @return number of rows.
 */
    int getRowSize();

/**
 *
 * @param coor - the coordinate.
 * @return the board in the requested
 */
    Cell* getCellAt(Coordinate coor);
    /**
     * destructor
     */
    ~Board();
    bool operator==(const Board &board)const;
    void updateCell(int x, int y, Cell::Value value);
private:
    Cell*** boardTable;
    int rowSize;
    int colSize;
    GameLogic *gameLogic;
};


#endif //EX2_BOARD_H
