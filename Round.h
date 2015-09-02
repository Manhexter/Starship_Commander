#pragma once
#include "Bataille.h"

class Round
{
public:
	Round();
	Round(unsigned int IdRound, Bataille Affrontement);
	~Round();
private:
	unsigned int IdRound;
	Bataille Affrontement;
};

