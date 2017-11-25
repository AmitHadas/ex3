//
// Created by amit on 11/21/17.
//

#include "Board_test.h"

Board_test :: Board_test (){}
void Board_test :: SetUp(){}
void Board_test ::TearDown(){}

TEST_F(Board_test, checkUpdateBoard) {
    RegularLogic r;
    Board firstBoard(8, 8, &r);
    Board updatedBoard(8, 8, &r);

    firstBoard.updateBoard(Coordinate(3, 4) , Cell::X);
    updatedBoard.updateCell(2, 3, Cell::X);
    updatedBoard.updateCell(3, 3, Cell::X);
    EXPECT_EQ(firstBoard, updatedBoard);
    firstBoard.updateBoard(Coordinate(3, 3), Cell::O);
    updatedBoard.updateCell(2, 2, Cell::O);
    updatedBoard.updateCell(3, 3, Cell::O);
    EXPECT_EQ(firstBoard, updatedBoard);
}