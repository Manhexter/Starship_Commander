#pragma once
#include "Flotte.h"

class Escadron
{
public:
	Escadron();
	Escadron(unsigned int IdEscadron, Flotte FlotteEscadron);
	~Escadron();
	Flotte GetFlotteEscadron();
	void SetFlotteEscadron(Flotte NewFlotteEscadron);
private:
	unsigned int IdEscadron;
	Flotte FlotteEscadron;
};

