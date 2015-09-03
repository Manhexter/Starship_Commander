#include "Combattant.h"

Combattant::Combattant()
{
}

Combattant::Combattant(unsigned int IdCombattantInit, string NomCambattantInit, unsigned int PuissanceMInit, unsigned int PuissanceLInit, unsigned int BouclierInit, 
	unsigned int StructureInit, string DescriptionInit, bool DispoInit) :
	IdCombattant(IdCombattantInit),
	NomCombattant(NomCambattantInit),
	PuissanceM(PuissanceMInit),
	PuissanceL(PuissanceLInit),
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

unsigned int Combattant::GetPuissanceM()
{
	return PuissanceM;
}

unsigned int Combattant::GetPuissanceL()
{
	return PuissanceL;
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

void Combattant::SetPuissanceM(unsigned int NewPuissanceM)
{
	PuissanceM = NewPuissanceM;
}

void Combattant::SetPuissanceL(unsigned int NewPuissanceL)
{
	PuissanceL = NewPuissanceL;
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