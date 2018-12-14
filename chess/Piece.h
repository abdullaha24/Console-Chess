#pragma once
#include <string>
#include "Square.h"
using namespace std;

class Piece
{
public:
	Piece(string name, string team);

	void setName(string name);
	string getName();

	void setTeam(string team);
	string getTeam();

	bool isWhite(string team);
	virtual bool validMove(Square* from, Square* to) = 0;
	void movePiece(Square*to);
protected:
	string _name;
	string _team;

};

