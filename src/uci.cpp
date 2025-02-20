#include <string>
#include "uci.hpp"

void UCI::handleCommand(const std::string &command)
{
    if (command == "uci")
    {
        std::cout << "id name Rocket Chess\n";
        std::cout << "id author abd002 & m0hossam\n";
        std::cout << "uciok\n";
    }
    else if (command == "isready")
    {
        std::cout << "readyok\n";
    }
    else if (command.substr(0, 8) == "position")
    {
    }
    else if (command.substr(0, 2) == "go")
    {
    }
    else if (command == "quit")
    {
        exit(0);
    }
    else
    {
        exit(0);
    }
}

void UCI::start()
{
    std::string command;
    while (std::getline(std::cin, command))
    {
        handleCommand(command);
    }
}