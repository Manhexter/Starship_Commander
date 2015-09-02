#include "Planete.h"



Planete::Planete()
{
}

Planete::Planete(unsigned int CoordXInit, unsigned int CoordYInit, unsigned int CoordZInit, string NomPlaneteInit, Batiment ConstructionInit) :
	Point(CoordXInit, CoordYInit, CoordZInit),
	NomPlanete(NomPlaneteInit),
	Construction(ConstructionInit)
{
}

Planete::~Planete()
{
}

string Planete::GetNomPlanete()
{
	return NomPlanete;
}

Batiment Planete::GetConstruction()
{
	return Construction;
}

void Planete::SetNomPlanete(string NewNomPlanete)
{
	NomPlanete = NewNomPlanete;
}

void Planete::SetConstruction(Batiment NewConstruction)
{
	Construction = NewConstruction;
}