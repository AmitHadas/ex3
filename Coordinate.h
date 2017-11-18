//
// Created by noa on 31/10/17.
//
/**
 * Noa or
 * 208385534
 */

#ifndef EX2_COORDINATE_H
#define EX2_COORDINATE_H


class Coordinate {
public:
    /**
     * Constructor
     * @param row - row size.
     * @param col - col size.
     */
    Coordinate(int row, int col);
    /**
     *
     * @return row member.
     */
    int getRow() const;
    /**
     *
     * @return col member.
     */
    int getCol() const;
private:
    int row;
    int col;
};


#endif //EX2_COORDINATE_H
