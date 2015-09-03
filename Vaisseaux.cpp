#include "Vaisseaux.h"



Vaisseaux::Vaisseaux(unsigned int IdCombattantInit, string NomCambattantInit, unsigned int PuissanceMInit, unsigned int PuissanceLInit, 
	unsigned int BouclierInit, unsigned int StructureInit, string DescriptionInit, bool DispoInit, unsigned int VitesseInit, unsigned int CapFretInit, bool PeutRecycler) :
	Combattant(IdCombattantInit, NomCambattantInit, PuissanceMInit, PuissanceLInit, BouclierInit, StructureInit, DescriptionInit, DispoInit),
	Vitesse(VitesseInit),
	CapFret(CapFretInit),
	Recycleur(PeutRecycler)
{
}


Vaisseaux::~Vaisseaux()
{
}

unsigned int Vaisseaux::GetVitesse()
{
	return Vitesse;
}

unsigned int Vaisseaux::GetCapFret()
{
	return CapFret;
}

bool Vaisseaux::GetRecycleur()
{
	return Recycleur;
}

void Vaisseaux::SetVitesse(unsigned int NewVitesse)
{
	Vitesse = NewVitesse;
}

void Vaisseaux::SetCapFret(unsigned int NewCapFret)
{
	CapFret = NewCapFret;
}

void Vaisseaux::SetRecycleur(bool NewCapaRecyclage)
{
	Recycleur = NewCapaRecyclage;
}