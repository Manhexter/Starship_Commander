#include "Combattant.h"

Combattant::Combattant()
{
}

Combattant::Combattant(unsigned int IdCombattantInit, string NomCambattantInit, unsigned int PuissanceInit, unsigned int BouclierInit, unsigned int StructureInit, string DescriptionInit, bool DispoInit) :
	IdCombattant(IdCombattantInit),
	NomCombattant(NomCambattantInit),
	Puissance(PuissanceInit),
	Bouclier(BouclierInit),
	Structure(StructureInit),
	Description(DescriptionInit),
	Disponible(DispoInit)
{
}


Combattant::~Combattant()
{
}

unsigned int Combattant::GetIdCombattant()
{
	return IdCombattant;
}

string Combattant::GetNomCombattant()
{
	return NomCombattant;
}

unsigned int Combattant::GetPuissance()
{
	return Puissance;
}

unsigned int Combattant::GetBouclier()
{
	return Bouclier;
}

unsigned int Combattant::GetStructure()
{
	return Structure;
}

string Combattant::GetDescription()
{
	return Description;
}

bool Combattant::GetDisponible()
{
	return Disponible;
}

void Combattant::SetIdCombattant(unsigned int NewIdCombattant)
{
	IdCombattant = NewIdCombattant;
}

void Combattant::SetNomCombattant(string NewNom)
{
	NomCombattant = NewNom;
}

void Combattant::SetPuissance(unsigned int NewPuissance)
{
	Puissance = NewPuissance;
}

void Combattant::SetBouclier(unsigned int NewBouclier)
{
	Bouclier = NewBouclier;
}

void Combattant::SetStructure(unsigned int NewStructure)
{
	Structure = NewStructure;
}

void Combattant::SetDescription(string NewDescription)
{
	Description = NewDescription;
}

void Combattant::SetDisponible(bool NewDispo)
{
	Disponible = NewDispo;
}