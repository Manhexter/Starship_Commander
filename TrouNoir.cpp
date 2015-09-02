#include "TrouNoir.h"



TrouNoir::TrouNoir()
{
}

TrouNoir::TrouNoir(unsigned int CoordXInit, unsigned int CoordYInit, unsigned int CoordZInit, unsigned int StabiliteInit) :
	Point(CoordXInit, CoordYInit, CoordZInit),
	Stabilite(StabiliteInit)
{
}

TrouNoir::~TrouNoir()
{
}

unsigned int TrouNoir::GetStabilite()
{
	return Stabilite;
}

void TrouNoir::SetStabilite(unsigned int NewStabilite)
{
	Stabilite = NewStabilite;
}