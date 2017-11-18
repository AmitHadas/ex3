//
// Created by noa on 30/10/17.
//
/**
 * Noa or
 * 208385534
 */
#ifndef EX1_CELL_H
#define EX1_CELL_H

#include<iostream>
using namespace std;


class Cell {
public:
    enum Value {X, O, Empty};
    /**
     * constructor
     * @param value - the value of the cell.
     */
    Cell(Value value);
    /**
     *
     * @return the value of the cell.
     */
    Cell :: Value getValue() const;
    /**
     *
     * @param newValue sets the cell's value
     * to be the received value.
     */
    void setValue(Cell :: Value newValue);
    /**
     * draws the value of the cell.
     */
    void draw() const;
    /**
     * destructor
     */
    ~Cell();
private:
    Cell :: Value value;
};


#endif //EX1_CELL_H