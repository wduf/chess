#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "square.hpp"

class Board
{
	private:
	int rows = 8;
	Square** squares;
	
	public:
	Board(Square**);
	void initBoard();
	void printBoard();
	void printCoords();
	bool checkCheck();
	bool checkMate();
	void makeMove();  // check if legal move before calling this
	bool checkPromote();
};

#endif
