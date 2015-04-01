#include <gtest/gtest.h>
#include "robotcleaner.h"

TEST(RobotCleanerTest, Robot_00N_should_be_00S__when_it_turn_round) {
    RobotCleaner robot(Position(0, 0, N));

    robot.round();

    EXPECT_TRUE(robot.position() == Position(0, 0, S));
}


TEST(RobotCleanerTest, Robot_00E_should_be_00W__when_it_turn_round) {
    RobotCleaner robot(Position(0, 0, E));

    robot.round();

    EXPECT_TRUE(robot.position() == Position(0, 0, W));
}


TEST(RobotCleanerTest, Robot_00S_should_be_00N__when_it_turn_round) {
    RobotCleaner robot(Position(0, 0, S));

    robot.round();

    EXPECT_TRUE(robot.position() == Position(0, 0, N));
}


TEST(RobotCleanerTest, Robot_00W_should_be_00E__when_it_turn_round) {
    RobotCleaner robot(Position(0, 0, W));

    robot.round();

    EXPECT_TRUE(robot.position() == Position(0, 0, E));
}

