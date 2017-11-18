//
// Created by noa on 31/10/17.
//
/**
 * Noa or
 * 208385534
 */
#include "Coordinate.h"

Coordinate ::Coordinate(int row, int col) {
    this->row = row;
    this->col = col;
}
Coordinate ::Coordinate() {
//    this->row ; oldCoor.row;
//    this->col = oldCoor.col;
}
int Coordinate ::getCol() const {
    return this ->col;
}
int Coordinate ::getRow() const {
    return this -> row;
}