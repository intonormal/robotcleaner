/*************************************************************************
	> File Name: command.h
	> Author: 
	> Mail: 
	> Created Time: Wed Apr  1 02:19:54 2015
 ************************************************************************/

#ifndef _COMMAND_H
#define _COMMAND_H
#include<string>
#include "position.h"

#define OVERRIDE virtual

struct Command {
    Command(Position& pos) : pos_(pos) {}

    virtual std::string execute() = 0;

protected:
    Position pos_;
};

struct Left : Command {
    OVERRIDE std::string execute() {
        pos_.turn(Left);
        return "success";
    }    
};

struct Right : Command {

};

struct Round : Command {

};

struct Forward : Command {

};

struct Backward : Command {
    
};

#endif
