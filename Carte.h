#pragma once
#include <string>

using namespace std;

class Carte
{
public:
	Carte();
	Carte(unsigned int IdCarte, string NomCarte);
	Carte(unsigned int IdCarte, string NomCarte, unsigned int Taille, unsigned int GetNbJoueurs);
	~Carte();
	unsigned int GetIdCarte();
	string GetNomCarte();
	unsigned int GetTaille();
	unsigned int GetNbJoueurs();
	void SetNomCarte(string NewNom);
	void SetTaille(unsigned int NewTaille);
	void SetNbJoueurs(unsigned int NewNbJoueurs);
private:
	unsigned int IdCarte;
	string NomCarte;
	unsigned int Taille;
	unsigned int NbJoueurs;
};

