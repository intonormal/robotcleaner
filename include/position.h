#ifndef _POSITION_H
#define _POSITION_H
#include<string>
enum Heading {W=0, N=90, E=180, S=270};
enum Direction { Right = 90, Left = 270 };

struct Position {
    Position(int x, int y, Heading h) : x_(x), y_(y), heading_(h) {}
    
    bool operator ==(const Position& rhs) const {
        return x_ == rhs.x_ && y_ == rhs.y_ && heading_ == rhs.heading_;
    }   
    
    bool operator !=(const Position& rhs) const {
        return !(*this == rhs);
    }
    
    void setHeading(Heading h) {
        heading_ =  h;
    }
    
    void turn(Direction dir) {
        heading_ = static_cast<Heading>((heading_+ dir)/360);
    } 
    
    std::string setXY(int ori) {
        if(heading_ == W) x_ -= ori;
        else if(heading_ == N) y_ += ori;
        else if(heading_ == E) x_ += ori;
        else if(heading_ == S) y_ -= ori;

        return "move success";

    }
    Heading heading() {
        return heading_;
    }

private:
    int x_;
    int y_;
    Heading heading_;
};
#endif
