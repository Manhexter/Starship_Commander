#pragma once
#include "Point.h"

class TrouNoir : public Point
{
public:
	TrouNoir();
	TrouNoir(unsigned int CoordX, unsigned int CoordY, unsigned int CoordZ, unsigned int Stabilite);
	~TrouNoir();
	unsigned int GetStabilite();
	void SetStabilite(unsigned int SetStabilite);
private:
	unsigned int Stabilite;
};

