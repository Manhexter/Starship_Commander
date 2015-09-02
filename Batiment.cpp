#include "Batiment.h"

Batiment::Batiment()
{
}

Batiment::Batiment(unsigned int IdBatimentInit, string NomBatimentInit) :
	IdBatiment(IdBatimentInit),
	NomBatiment(NomBatimentInit)
{
}

Batiment::Batiment(unsigned int IdBatimentInit, string NomBatimentInit, string DescBatimentInit, unsigned int ProductiviteInit, bool BatDisponibleInit) :
	IdBatiment(IdBatimentInit),
	NomBatiment(NomBatimentInit),
	DescBatiment(DescBatimentInit),
	Productivite(ProductiviteInit),
	BatDisponible(BatDisponibleInit)
{
}

Batiment::~Batiment()
{
}

unsigned int Batiment::GetIdBatiment()
{
	return IdBatiment;
}

string Batiment::GetNomBatiment()
{
	return NomBatiment;
}

string Batiment::GetDescBatiment()
{
	return DescBatiment;
}

unsigned int Batiment::GetProductivite()
{
	return Productivite;
}

bool Batiment::GetBatDisponible()
{
	return BatDisponible;
}

void Batiment::SetIdBatiment(unsigned int NewIdBatiment)
{
	IdBatiment = NewIdBatiment;
}

void Batiment::SetNomBatiment(string NewNomBatiment)
{
	NomBatiment = NewNomBatiment;
}

void Batiment::SetDescBatiment(string NewDescBatiment)
{
	DescBatiment = NewDescBatiment;
}

void Batiment::SetProductivite(unsigned int NewProductivite)
{
	Productivite = NewProductivite;
}

void Batiment::SetBatDisponible(bool NewBatDisponible)
{
	BatDisponible = NewBatDisponible;
}