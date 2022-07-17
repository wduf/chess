#include "board.hpp"

using namespace std;

Board::Board(Square** squares)
{
	this->squares = squares;
}

void Board::initBoard()
{
	for(int r = 7; r > -1; r--)
	{
		for(int c = 0; c < 8; c++)
		{
			string s = ("" + ('a' + c) + ('8' - r));
			*(this->squares + (r * 8) + c) = new Square(s, r, c);  // make square constructor like this
		}
	}
}

void Board::printBoard()
{}

void Board::printCoords()
{
	for(int r = 7; r > -1; r--)
	{
		for(int c = 0; c < 8; c++)
		{
			cout << "|" << r << c << " ";
		}
	}
	cout << "|\n";
}

bool Board::checkCheck()
{
	return false;
}

bool Board::checkMate()
{
	return false;	
}

void Board::makeMove(string s)
{
	// read from back to get new square, first char is type, if len4, use 2nd char to determine which to move
}

bool Board::checkPromote()
{
	// check if any opposite team pawns on furthest rank, if so, prompt to promote, pick piece
}

