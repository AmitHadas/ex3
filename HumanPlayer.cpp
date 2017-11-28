//
// Created by noa on 31/10/17.
//
/**
 * Noa or
 * 208385534
 */
#include <list>
#include <limits>
#include "HumanPlayer.h"

HumanPlayer ::HumanPlayer(Cell::Value value, GameLogic *logic) {
    this ->value = value;
    this->logic = logic;
    this->hasMove = true;
}
Coordinate HumanPlayer ::doYourTurn(Board *board) {
    list<Coordinate> optionsList;
    int row = board->getRowSize(), col = board->getColSize();
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            Coordinate coor = Coordinate(i, j);

            if (!this->logic->findOptions(coor, this->value, board).empty()
                    && board->getCellAt(coor)->getValue() == Cell :: Empty) {
                optionsList.push_back(coor);
            }
        }
    }
    char stringVal;
    if (this->value == Cell :: X) {
        stringVal = 'X';
    } else {
        stringVal = 'O';
    }

    cout << '\n' << stringVal << ": It's your move" << endl;
    if (!optionsList.empty()) {
        this->hasMove = true;
        cout << "Your possible moves:";
        list<Coordinate>::const_iterator listIterator;
        for (listIterator = optionsList.begin();
             listIterator != optionsList.end(); ++listIterator) {
            if (!(listIterator == optionsList.begin())) {
                cout << ", ";
            }
            int x = listIterator->getRow() + 1, y = listIterator->getCol() + 1;
            cout << "(" << x << "," << y << ")";
        }
        cout << '\n' << "Please enter your move row, col:";
        Coordinate choice = this->getChoice(optionsList);
        return choice;
    } else {
        movePasses();
    }


}

Coordinate HumanPlayer ::getChoice(list<Coordinate> optionsList) const {
    list<Coordinate> ::const_iterator listIterator;
        bool isInList = false;
        int num1 = -1, num2 = -1;
        cin >> num1 >> num2;
        if (!num1 || !num2) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        Coordinate choice = Coordinate(num1, num2);
        for (listIterator = optionsList.begin();
             listIterator != optionsList.end(); ++listIterator) {
            if (num1 == listIterator->getRow() + 1
                && num2 == listIterator ->getCol() + 1) {
                isInList = true;
                choice = Coordinate(num1, num2);
                break;
            }
        }
        if (!isInList) {
            cout << "Your choice is not valid."
                    "Please make another choice.";
            choice = this ->getChoice(optionsList);
        }

    return choice;
}
Cell ::Value HumanPlayer :: getVal() const {
    return this->value;
}

bool HumanPlayer ::hasMoreMoves() {
    return this->hasMove;
}

void HumanPlayer::movePasses() {
    this->hasMove = false;
    char key;
    cout << "No possible moves. Play passes back to the other player.";
    cout << "Press any key + Enter to continue.";
    cin >> key;
}

void HumanPlayer:: printChoice(Coordinate c){}