#include "Ressource.h"



Ressource::Ressource(unsigned int IdRessourceInit, string NomRessourceInit, string DescRessourceInit) :
	IdRessource(IdRessourceInit),
	NomRessource(NomRessourceInit),
	DescRessource(DescRessourceInit)
{
}


Ressource::~Ressource()
{
}

unsigned int Ressource::GetIdRessource()
{
	return IdRessource;
}

string Ressource::GetNomRessource()
{
	return NomRessource;
}

string Ressource::GetDescRessource()
{
	return DescRessource;
}

void Ressource::SetIdRessource(unsigned int NewIdRessource)
{
	IdRessource = NewIdRessource;
}

void Ressource::SetNomRessource(string NewNom)
{
	NomRessource = NewNom;
}

void Ressource::SetDescRessource(string NewDesc)
{
	DescRessource = NewDesc;
}