#pragma once
#include <string> 

using namespace std;

class Combattant
{
public:
	Combattant();
	Combattant(unsigned int IdCombattant, string NomCombattant, unsigned int PuissanceM, unsigned int PuissanceL, unsigned int Bouclier, 
		unsigned int Structure, string Description, bool Disponible);
	~Combattant();
	unsigned int GetIdCombattant();
	string GetNomCombattant();
	unsigned int GetPuissanceM();
	unsigned int GetPuissanceL();
	unsigned int GetBouclier();
	unsigned int GetStructure();
	string GetDescription();
	bool GetDisponible();
	void SetIdCombattant(unsigned int NewIdCombattant);
	void SetNomCombattant(string NewNomCombattant);
	void SetPuissanceM(unsigned int NewPuissanceM);
	void SetPuissanceL(unsigned int NewPuissanceL);
	void SetBouclier(unsigned int NewBouclier);
	void SetStructure(unsigned int NewStructure);
	void SetDescription(string NewDescription);
	void SetDisponible(bool NewDisponible);
protected:
	unsigned int IdCombattant;
	string NomCombattant;
	unsigned int PuissanceM;
	unsigned int PuissanceL;
	unsigned int Bouclier;
	unsigned int Structure;
	string Description;
	bool Disponible;
};

