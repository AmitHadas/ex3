//
// Created by amit on 11/25/17.
//

#include "logic_test.h"
logic_test ::logic_test() {}
void logic_test ::SetUp() {}
void logic_test ::TearDown() {}
TEST_F(logic_test, noOptions){
    Board b(8, 8, new RegularLogic);
    for(int i = 0; i < b.getRowSize(); i++) {
        b.updateCell(i, 0, Cell ::X);
        b.updateCell(i, b.getColSize() - 1, Cell ::O);
    }
    for(int i = 1; i < b.getColSize(); i++) {
        b. updateCell(0, i, Cell::O);
    }


EXPECT_EQ(Board(8, 8, new RegularLogic()).getColSize(), 8);
}

TEST_F(logic_test, oneOption) {
    RegularLogic logic;
    Board b(4, 4, &logic);
    int options = 0;
    list<Coordinate> listOptionsToFlip;
    list<Coordinate> listOptions;
    list<Coordinate> :: const_iterator listIter;
    b.updateCell(0, 0, Cell::O);
    for (int i = 1; i < 4; i++) {
        b.updateCell(i, 0, Cell::X);
    }
    for (int i = 0; i < 3; i++) {
        b.updateCell(i, 1, Cell::X);
    }
    b.updateCell(1, 2, Cell::X);
    b.updateCell(2, 2, Cell::O);
    b.showBoard();
    for(int i = 0; i < b.getRowSize(); i++) {
        for (int j = 0; j < b.getColSize(); j++) {
            listOptionsToFlip = logic.findOptions(Coordinate(i, j), Cell::O, &b);
            if(b.getCellAt(Coordinate(i,j))->getValue() == Cell::Empty && listOptionsToFlip.size() != 0) {
                options++;
                Coordinate c(i, j);
                listOptions.push_back(c);
            }
        }
    }
    EXPECT_EQ(options, 1);
    listIter = listOptions.begin();
    EXPECT_EQ(*listIter, Coordinate(0, 2));
}