#include "Flotte.h"



Flotte::Flotte()
{
}

Flotte::Flotte(unsigned int IdFlotteInit, string NomFlotteInit, Joueur ControleurInit, Point PositionInit, Point DestinationInit, Commandant CommandantInit) :
	IdFlotte(IdFlotteInit),
	NomFlotte(NomFlotteInit),
	Controleur(ControleurInit),
	Position(PositionInit),
	Destination(DestinationInit),
	CommandantFlotte(CommandantInit)
{
}

Flotte::~Flotte()
{
}

string Flotte::GetNomFlotte()
{
	return NomFlotte;
}

Joueur Flotte::GetControleur()
{
	return Controleur;
}

Point Flotte::GetPosition()
{
	return Position;
}

Point Flotte::GetDestination()
{
	return Destination;
}

Commandant Flotte::GetFlotteCommandant()
{
	return CommandantFlotte;
}

void Flotte::SetNomFlotte(string NewNomFlotte)
{
	NomFlotte = NewNomFlotte;
}

void Flotte::SetControleur(Joueur NewControleur)
{
	Controleur = NewControleur;
}

void Flotte::SetPosition(Point NewPosition)
{
	Position = NewPosition;
}

void Flotte::SetDestination(Point NewDestination)
{
	Destination = NewDestination;
}

void Flotte::SetFlotteCommandant(Commandant NewCommandant)
{
	CommandantFlotte = NewCommandant;
}