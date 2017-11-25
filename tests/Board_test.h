//
// Created by amit on 11/21/17.
//

#ifndef EX3_BOARD_TEST_H
#define EX3_BOARD_TEST_H
#include "../gtest_src/gtest.h"
#include "../Board.h"
#include "../RegularLogic.h"
#include <iostream>
using namespace std;

    class Board_test : public testing::Test {
//    public:
//            Board b1;
//            Board b2;
    public:
       // Board_test () : b1(8, 8, new RegularLogic()), b2(8, 8, new RegularLogic()) {};
        virtual void SetUp();
        virtual void TearDown();
    };







#endif //EX3_BOARD_TEST_H
