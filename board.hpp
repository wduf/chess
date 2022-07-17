#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "square.hpp"

class Board
{
	private:
	Square** squares;
	
	public:
	Board(Square**);
	void initBoard();
	void printBoard();
	void printCoords();
	bool checkCheck();
	bool checkMate();
	void makeMove(string);  // check if legal move before calling this, read stuff like "e4, nc6, nab3", read backwards to get square, go from there
	bool checkPromote();
	// add later, would be cool
	void readPGN();
	void exportPGN();
};

#endif
