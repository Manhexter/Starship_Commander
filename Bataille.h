#pragma once
#include "Point.h"



class Bataille
{
public:
	Bataille();
	Bataille(unsigned int IdBataille, Point LieuBataille);
	~Bataille();
	Point GetLieuBataille();
	void SetLieuBataille(Point NewLieuBataille);
private:
	unsigned int IdBataille;
	Point LieuBataille;
};

