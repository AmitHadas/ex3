//
// Created by noa on 05/11/17.
//
/**
 * Noa or
 * 208385534
 */

#include "ConsoleScreen.h"
void ConsoleScreen::showBoard(Board *board) {
    board->showBoard();
}
void ConsoleScreen :: gameOverScreen(Board *board) {


    int numOfX = 0, numOfO = 0;
    for (int i = 0; i < board->getRowSize(); i++) {
        for (int j = 0; j < board->getColSize(); j++) {
            if (board->getCellAt(Coordinate(i, j))->getValue()
                == Cell ::X) {
                numOfX++;
            } else if (board->getCellAt(Coordinate(i, j))->getValue()
                       == Cell ::O) {
                numOfO++;
            }
        }
    }
    cout << '\n' << "The game is over" << endl;
    if (numOfO > numOfX) {
        cout << "The winner is O!" << endl;
    } else if (numOfX > numOfO) {
        cout << "The winner is X!" << endl;
    } else {
        cout << "It's a TIE!" << endl;
    }

}



