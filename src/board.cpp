#include "board.hpp"

Board::Board(std::string fen)
{
    loadPosFromFEN(fen);
}

void Board::loadPosFromFEN(std::string fen)
{
    int x = 0;
    int y = 0;

    for (char c : fen)
    {
        if (c == '/') // lower rank
        {
            x++;
            y = 0;
            continue;
        }

        if (c >= '1' && c <= '8') // empty squares
        {
            int nEmpty = c - '0';
            for (int i = 0; i < nEmpty; i++)
            {
                pieces[x][y].type = EMPTY;
                pieces[x][y].color = EMPTY;
                y++;
            }
            continue;
        }

        int type;
        int color;

        switch (c)
        {
        case 'P':
            type = PAWN;
            color = WHITE;
            break;
        case 'N':
            type = KNIGHT;
            color = WHITE;
            break;
        case 'B':
            type = BISHOP;
            color = WHITE;
            break;
        case 'R':
            type = ROOK;
            color = WHITE;
            break;
        case 'Q':
            type = QUEEN;
            color = WHITE;
            break;
        case 'K':
            type = KING;
            color = WHITE;
            break;
        case 'p':
            type = PAWN;
            color = BLACK;
            break;
        case 'n':
            type = KNIGHT;
            color = BLACK;
            break;
        case 'b':
            type = BISHOP;
            color = BLACK;
            break;
        case 'r':
            type = ROOK;
            color = BLACK;
            break;
        case 'q':
            type = QUEEN;
            color = BLACK;
            break;
        case 'k':
            type = KING;
            color = BLACK;
            break;
        default:
            exit(1); // invalid character
        }

        pieces[x][y].type = type;
        pieces[x][y].color = color;
        y++;
    }
}

void Board::printBoard()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            char c = '.';

            Piece curPiece = pieces[i][j];

            if (curPiece.type != EMPTY)
            {
                switch (curPiece.type)
                {
                case PAWN:
                    c = (curPiece.color == WHITE) ? 'P' : 'p';
                    break;
                case KNIGHT:
                    c = (curPiece.color == WHITE) ? 'N' : 'n';
                    break;
                case BISHOP:
                    c = (curPiece.color == WHITE) ? 'B' : 'b';
                    break;
                case ROOK:
                    c = (curPiece.color == WHITE) ? 'R' : 'r';
                    break;
                case QUEEN:
                    c = (curPiece.color == WHITE) ? 'Q' : 'q';
                    break;
                case KING:
                    c = (curPiece.color == WHITE) ? 'K' : 'k';
                    break;
                }
            }

            std::cout << c << " ";
        }
        std::cout << std::endl;
    }
}
