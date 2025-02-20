#ifndef UCI_HPP
#define UCI_HPP

#include <iostream>
#include <string>

class UCI
{
private:
    void handleCommand(const std::string &command);

public:
    void start();
};

#endif