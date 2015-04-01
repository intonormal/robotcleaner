#ifndef _RobotCleaner_H
#define _RobotCleaner_H
#include "position.h"
//#include "command.h"

enum Orient {Forward = 1, Backward = -1};

struct RobotCleaner {
    RobotCleaner(const Position& pos) : pos_(pos){}
    Position& position() {
        return pos_;
    }

    void turn(Direction dir) {
        pos_.setHeading(static_cast<Heading>((pos_.heading() + dir)%360)); 
    }

    std::string move(Orient ori, int steps = 1) {
        return steps >= 1 && steps <= 10 ? pos_.setXY(static_cast<int>(ori) * steps) 
                                         : "move fail for out of scope";
    }

    //void execute(Command& command) {
    //    command.execute();
    //}
    
    void round() {
        turn(Right);
        turn(Right);
    }
private:
    Position pos_;    
};

#endif
