#include "pch.h"
#include "Square.h"

Square::Square(int x, int y)
{
	setX(x);
	setY(y);
	_piece = nullptr;
}

void Square::setX(int x)
{
	_x = x;
}

int Square::getX()
{
	return _x;
}

void Square::setY(int y)
{
	_y = y;
}

int Square::getY()
{
	return _y;
}

void Square::setPiece(Piece * piece)
{
	_piece = piece;
}

Piece * Square::getPiece()
{
	return _piece;
}
