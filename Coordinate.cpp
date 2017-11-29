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
Coordinate ::Coordinate() {}
int Coordinate ::getCol() const {
    return this ->col;
}
int Coordinate ::getRow() const {
    return this -> row;
}
bool Coordinate :: operator==(const Coordinate &coordinate) const {
    return this->row == coordinate.row && this->col == coordinate.col;
}