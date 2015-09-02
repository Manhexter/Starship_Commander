#include "Bataille.h"

Bataille::Bataille()
{
}

Bataille::Bataille(unsigned int IdBatailleInit, Point LieuBatailleInit) :
	IdBataille(IdBatailleInit),
	LieuBataille(LieuBatailleInit)
{
}


Bataille::~Bataille()
{
}

Point Bataille::GetLieuBataille()
{
	return LieuBataille;
}

void Bataille::SetLieuBataille(Point NewLieuBataille)
{
	LieuBataille = NewLieuBataille;
}