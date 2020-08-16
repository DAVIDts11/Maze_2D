#pragma once
#include <iostream>

class Pos2d {

private:
	int _row;
	int _column;
public:
	Pos2d(int row, int column) : _row(row), _column(column) {}

	Pos2d();
	~Pos2d();
	int Getrow() const;
	int Getcol() const;
	void Setrow(int row);
	void Setcol(int col);
	friend std::ostream& operator<<(std::ostream& out, const Pos2d& pos);
	bool operator==(const Pos2d& pos)
	{
		return this->_row == pos.Getrow() && this->_column == pos.Getcol();
	}

	bool operator!=(const Pos2d& pos)
	{
		return !(*this == pos);
	}
};



