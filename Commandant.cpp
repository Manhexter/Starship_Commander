#include "Commandant.h"



Commandant::Commandant()
{
}

Commandant::Commandant(unsigned int IdInit, string NomInit, unsigned int NiveauInit, unsigned int ExpInit, Flotte AffectInit) :
	IdCommandant(IdInit),
	NomCommandant(NomInit),
	Niveau(NiveauInit),
	Experience(ExpInit),
	Affectation(AffectInit)
{
}

Commandant::~Commandant()
{
}

unsigned int Commandant::GetIdCommandant()
{
	return IdCommandant;
}

string Commandant::GetNomCommandant()
{
	return NomCommandant;
}

unsigned int Commandant::GetNiveau()
{
	return Niveau;
}

unsigned int Commandant::GetExperience()
{
	return Experience;
}

Flotte Commandant::GetAffectation()
{
	return Affectation;
}

void Commandant::SetIdCommandant(unsigned int NewId)
{
	IdCommandant = NewId;
}

void Commandant::SetNomCommandant(string NewNom)
{
	NomCommandant = NewNom;
}

void Commandant::SetNiveau(unsigned int NewNiveau)
{
	Niveau = NewNiveau;
}

void Commandant::SetExperience(unsigned int NewExp)
{
	Experience = NewExp;
}

void Commandant::SetAffectation(Flotte NewAffectation)
{
	Affectation = NewAffectation;
}