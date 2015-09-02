#include "Carte.h"

Carte::Carte()
{
}

Carte::Carte(unsigned int IdInitial, string NomInitial) :
	IdCarte(IdInitial),
	NomCarte(NomInitial)
{
}

Carte::Carte(unsigned int IdInitial, string NomInitial, unsigned int TailleInitiale, unsigned int NbJoueursInitial) :
	IdCarte(IdInitial),
	NomCarte(NomInitial),
	Taille(TailleInitiale),
	NbJoueurs(NbJoueursInitial)
{
}


Carte::~Carte()
{
}

unsigned int Carte::GetIdCarte()
{
	return IdCarte;
}

string Carte::GetNomCarte()
{
	return NomCarte;
}

unsigned int Carte::GetTaille()
{
	return Taille;
}

unsigned int Carte::GetNbJoueurs()
{
	return NbJoueurs;
}

void Carte::SetNomCarte(string NewNom)
{
	NomCarte = NewNom;
}

void Carte::SetTaille(unsigned int NewTaille)
{
	Taille = NewTaille;
}

void Carte::SetNbJoueurs(unsigned int NewNbJoueurs)
{
	NbJoueurs = NewNbJoueurs;
}