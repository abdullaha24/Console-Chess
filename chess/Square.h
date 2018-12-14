#pragma once

class Piece;

class Square
{
public:
	Square(int x, int y);

	void setX(int x);
	int getX();

	void setY(int y);
	int getY();

	void setPiece(Piece* piece);
	Piece* getPiece();
private:
	int _x;
	int _y;
	Piece* _piece;
};

