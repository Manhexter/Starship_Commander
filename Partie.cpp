#include "Partie.h"
using namespace std;


Partie::Partie(unsigned int IdInitial, string NomInitial) :
	IdPartie(IdInitial),
	NomPartie(NomInitial),
	NumTour(0),
	JoueurCourant(0),
	MaxRoundBtl(0)
{
}

Partie::Partie(unsigned int IdInitial, string NomInitial, Carte CarteInitiale, unsigned int NumTourInitial, unsigned int JoueurCourantInitial, unsigned int MaxRoundBtlInit) :
	IdPartie(IdInitial),
	NomPartie(NomInitial),
	CartePartie(CarteInitiale),
	NumTour(NumTourInitial),
	JoueurCourant(JoueurCourantInitial),
	MaxRoundBtl(MaxRoundBtlInit)
{
}

Partie::~Partie()
{
}

unsigned int Partie::GetIdPartie()
{
	return IdPartie;
}

string Partie::GetNomPartie()
{
	return NomPartie;
}

Carte Partie::GetCartePartie()
{
	return CartePartie;
}

unsigned int Partie::GetNumTour()
{
	return NumTour;
}

unsigned int Partie::GetJoueurCourant()
{
	return JoueurCourant;
}

unsigned int Partie::GetMaxRoundBtl()
{
	return MaxRoundBtl;
}

void Partie::SetNumTour(unsigned int NewNumTour)
{
	NumTour = NewNumTour;
}

void Partie::SetJoueurCourant(unsigned int NewJoueurCourant)
{
	JoueurCourant = NewJoueurCourant;
}

void Partie::SetMaxRoundBtl(unsigned int NewMaxRound)
{
	MaxRoundBtl = NewMaxRound;
}