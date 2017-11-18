//
// Created by noa on 30/10/17.
//
/**
 * Noa or
 * 208385534
 */

#include "Cell.h"
//static enum Value {X = "X", O = "O", Empty = " "};
Cell :: Cell(Cell :: Value value) {
    this->value = value;
}

void Cell ::draw() const {
    switch (this -> value) {
        case X:
            cout << "X";
            break;
        case O:
            cout << "O";
            break;
        case Empty:
            cout << " ";
            break;
        default:
            cout << " ";
    }

}

Cell :: Value Cell :: getValue() const {
    return this->value;
}

void Cell :: setValue(Cell :: Value newValue) {
    this->value = newValue;
}

Cell::Value Cell ::getOpponentVal(Cell::Value value) {
    if (value == Cell::X) {
        return Cell::O;
    } else if (value == Cell::O) {
        return Cell::X;
    } else {
        return Cell::Empty;
    }
}
Cell :: ~Cell() {
}