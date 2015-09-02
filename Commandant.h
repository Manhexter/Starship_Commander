#pragma once
#include "Flotte.h"

#include <string>

using namespace std;

class Commandant
{
public:
	Commandant();
	Commandant(unsigned int IdCommandant, string NomCommandant, unsigned int Niveau, unsigned int Experience, Flotte Affectation);
	~Commandant();
	unsigned int GetIdCommandant();
	string GetNomCommandant();
	unsigned int GetNiveau();
	unsigned int GetExperience();
	Flotte GetAffectation();
	void SetIdCommandant(unsigned int NewId);
	void SetNomCommandant(string NewNom);
	void SetNiveau(unsigned int NewNiveau);
	void SetExperience(unsigned int NewExp);
	void SetAffectation(Flotte NewAffectactation);
private:
	unsigned int IdCommandant;
	string NomCommandant;
	unsigned int Niveau;
	unsigned int Experience;
	Flotte Affectation;
};

