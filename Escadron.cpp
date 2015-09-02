#include "Escadron.h"



Escadron::Escadron()
{
}

Escadron::Escadron(unsigned int IdEscadronInit, Flotte FlotteAppartenance) :
	IdEscadron(IdEscadronInit),
	FlotteEscadron(FlotteAppartenance)
{
}

Escadron::~Escadron()
{
}

Flotte Escadron::GetFlotteEscadron()
{
	return FlotteEscadron;
}

void Escadron::SetFlotteEscadron(Flotte NewFlotteEscadron)
{
	FlotteEscadron = NewFlotteEscadron;
}