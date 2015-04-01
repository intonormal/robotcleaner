#include <gtest/gtest.h>
#include "robotcleaner.h"
using namespace std;

TEST(RobotCleanerTest, Robot_01N_should_be_00N__when_it_move_backward) {
    RobotCleaner robot(Position(0, 1, N));

    string result = robot.move(Backward);

    EXPECT_TRUE("move success" == result);
    EXPECT_TRUE(robot.position() == Position(0, 0, N));
}

TEST(RobotCleanerTest, Robot_10W_should_be_20W__when_it_move_backward) {
    RobotCleaner robot(Position(1, 0, W));

    string result = robot.move(Backward);

    EXPECT_TRUE("move success" == result);
    EXPECT_TRUE(robot.position() == Position(2, 0, W));
}

TEST(RobotCleanerTest, Robot_01S_should_be_02S__when_it_move_backward) {
    RobotCleaner robot(Position(0, 1, S));

    string result = robot.move(Backward);

    EXPECT_TRUE("move success" == result);
    EXPECT_TRUE(robot.position() == Position(0, 2, S));
}

TEST(RobotCleanerTest, Robot_10E_should_be_00E__when_it_move_backward) {
    RobotCleaner robot(Position(1, 0, E));

    string result = robot.move(Backward);

    EXPECT_TRUE("move success" == result);
    EXPECT_TRUE(robot.position() == Position(0, 0, E));
}


TEST(RobotCleanerTest, Robot_00N_should_be_02N__when_it_move_backward_2) {
    RobotCleaner robot(Position(0, 2, N));

    string result = robot.move(Backward, 2);

    EXPECT_TRUE("move success" == result);
    EXPECT_TRUE(robot.position() == Position(0, 0, N));
}

TEST(RobotCleanerTest, Robot_20W_should_be_00W__when_it_move_backward_2) {
    RobotCleaner robot(Position(2, 0, W));

    string result = robot.move(Backward, 2);

    EXPECT_TRUE("move success" == result);
    EXPECT_TRUE(robot.position() == Position(4, 0, W));
}

TEST(RobotCleanerTest, Robot_02S_should_be_00S__when_it_move_backward_2) {
    RobotCleaner robot(Position(0, 2, S));

    string result = robot.move(Backward, 2);

    EXPECT_TRUE("move success" == result);
    EXPECT_TRUE(robot.position() == Position(0, 4, S));
}

TEST(RobotCleanerTest, Robot_00E_should_be_20E__when_it_move_backward_2) {
    RobotCleaner robot(Position(2, 0, E));

    string result = robot.move(Backward, 2);

    EXPECT_TRUE("move success" == result);
    EXPECT_TRUE(robot.position() == Position(0, 0, E));
}


TEST(RobotCleanerTest, Robot_02S_should_be_not_change__when_it_move_backward_0) {
    RobotCleaner robot(Position(0, 2, S));

    string result = robot.move(Backward, 0);

    EXPECT_TRUE("move fail for out of scope" == result);
    EXPECT_TRUE(robot.position() == Position(0, 2, S));
}

TEST(RobotCleanerTest, Robot_00E_should_be_not_change__when_it_move_backward_11) {
    RobotCleaner robot(Position(0, 0, E));

    string result = robot.move(Backward, 11);

    EXPECT_TRUE("move fail for out of scope" == result);
    EXPECT_TRUE(robot.position() == Position(0, 0, E));
}
