#include <gtest/gtest.h>
#include "robotcleaner.h"

TEST(RobotCleanerTest, Robot_00N_should_be_00W__When_it_turn_left) {
    RobotCleaner robot(Position(0, 0, N));
    
    robot.turn(Left);

    EXPECT_TRUE(robot.position() == Position(0, 0, W));
}

TEST(RobotCleanerTest, Robot_00W_should_be_00S__When_it_turn_left) {
    RobotCleaner robot(Position(0, 0, W));
    
    robot.turn(Left);

    EXPECT_TRUE(robot.position() == Position(0, 0, S));
}

TEST(RobotCleanerTest, Robot_00S_should_be_00E__When_it_turn_left) {
    RobotCleaner robot(Position(0, 0, S));
    
    robot.turn(Left);

    EXPECT_TRUE(robot.position() == Position(0, 0, E));
}

TEST(RobotCleanerTest, Robot_00E_should_be_00N__When_it_turn_left) {
    RobotCleaner robot(Position(0, 0, E));
    
    robot.turn(Left);

    EXPECT_TRUE(robot.position() == Position(0, 0, N));
}
