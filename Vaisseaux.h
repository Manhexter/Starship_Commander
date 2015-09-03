#pragma once
#include "Combattant.h"

class Vaisseaux : public Combattant
{
public:
	Vaisseaux(unsigned int IdCombattantInit, string NomCambattantInit, unsigned int PuissanceMInit, unsigned int PuissanceLInit, unsigned int BouclierInit, 
		unsigned int StructureInit, string DescriptionInit, bool DispoInit, unsigned int Vitesse, unsigned int CapFret, bool Recycleur);
	~Vaisseaux();
	unsigned int GetVitesse();
	unsigned int GetCapFret();
	bool GetRecycleur();
	void SetVitesse(unsigned int NewVitesse);
	void SetCapFret(unsigned int NewCapFret);
	void SetRecycleur(bool NewRecycleur);
private:
	unsigned int Vitesse;
	unsigned int CapFret;
	bool Recycleur;
};

