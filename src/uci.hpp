#ifndef UCI_HPP
#define UCI_HPP

#include <iostream>

class UCI
{
    void handleCommand(const std::string &command);

public:
    void start();
};

#endif