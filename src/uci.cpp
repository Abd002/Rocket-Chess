#include "uci.hpp"
#include "board.hpp"

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
        std::string fen = command.substr(9, command.size() - 9);
        std::cout << fen << "\n";
        Board board(fen);
        board.printBoard();
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