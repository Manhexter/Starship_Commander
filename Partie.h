#pragma once
#include <string>
#include "Carte.h"

using namespace std;

class Partie
{
public:
	Partie(unsigned int IdPartie, string NomPartie);
	Partie(unsigned int IdPartie, string NomPartie, Carte IdCarte, unsigned int NumTour, unsigned int JoueurCourant, unsigned int MaxRoundBtl);
	~Partie();
	unsigned int GetIdPartie();
	string GetNomPartie();
	Carte GetCartePartie();
	unsigned int GetNumTour();
	unsigned int GetJoueurCourant();
	unsigned int GetMaxRoundBtl();
	void SetNumTour(unsigned int NewNumTour);
	void SetJoueurCourant(unsigned int NewJoueurCourant);
	void SetMaxRoundBtl(unsigned int NewMaxRound);
private:
	unsigned int IdPartie;
	string NomPartie;
	Carte CartePartie;
	unsigned int NumTour;
	unsigned int JoueurCourant;
	unsigned int MaxRoundBtl;
};

