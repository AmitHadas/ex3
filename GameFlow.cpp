//
// Created by noa on 01/11/17.
//
/**
 * Noa or
 * 208385534
 */
#include "GameFlow.h"


GameFlow ::GameFlow(GameLogic *logic, Player *player1, Player *player2, Screen *screen) {
    this->board = new Board(8, 8, logic);
    this->logic = logic;
    this->player1 = player1;
    this->player2 = player2;
    this->screen = screen;
}

void GameFlow ::playOneTurn() {
    this->screen->showBoard(this->board);

    while (player1->hasMoreMoves() || player2->hasMoreMoves()) {
        if (this->isBoardFull()) {
            break;
        }
        Coordinate coor = player1->doYourTurn(this->board);
        if (player1->hasMoreMoves()) {
            this->board->updateBoard(coor, player1->getVal());
            this->screen->showBoard(this->board);
        } else {
            movePasses();
        }
        if (this->isBoardFull()) {
            break;
        }
        coor = player2->doYourTurn(this->board);
        if (player2->hasMoreMoves()) {
            this->board->updateBoard(coor, player2->getVal());
            this->screen->showBoard(this->board);
        } else {
            movePasses();
        }
    }
    this->screen->gameOverScreen(board);

}
bool GameFlow ::isBoardFull() {
    bool isFull = true;
    for (int i = 0; i < this->board->getRowSize(); i++) {
        for (int j = 0; j < this->board->getColSize(); j++) {
            if (this->board->getCellAt(Coordinate(i,j))->getValue() == Cell ::Empty) {
                isFull = false;
            }
        }
    }
    return isFull;
}
void GameFlow ::movePasses() {
        char key;
        cout << "No possible moves. Play passes back to the other player.";
        cout << "Press any key + Enter to continue.";
        cin >> key;
}


GameFlow ::~GameFlow() {
    delete(board);

}