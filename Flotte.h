#pragma once
#include "Joueur.h"
#include "Point.h"
#include "Commandant.h"

class Flotte
{
public:
	Flotte();
	Flotte(unsigned int IdFlotte, string NomFlotte, Joueur FlotteControleur, Point Position, Point Destination, Commandant FlotteCommandant);
	~Flotte();
	string GetNomFlotte();
	Joueur GetControleur();
	Point GetPosition();
	Point GetDestination();
	Commandant GetFlotteCommandant();
	void SetNomFlotte(string NewNomFlotte);
	void SetControleur(Joueur NewControleur);
	void SetPosition(Point NewPosition);
	void SetDestination(Point NewDestination);
	void SetFlotteCommandant(Commandant NewCommandant);
private:
	unsigned int IdFlotte;
	string NomFlotte;
	Joueur Controleur;
	Point Position;
	Point Destination;
	Commandant CommandantFlotte;
};

