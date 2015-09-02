#include "Technologie.h"

Technologie::Technologie(unsigned int IdTechnoInit, string NomTechnoInit) :
	IdTechno(IdTechnoInit),
	NomTechno(NomTechnoInit)
{
}

Technologie::Technologie(unsigned int IdTechnoInit, string NomTechnoInit, string DescTechnoInit, bool TechnoDispoInit) :
	IdTechno(IdTechnoInit),
	NomTechno(NomTechnoInit),
	DescTechno(DescTechnoInit),
	TechnoDispo(TechnoDispoInit)
{
}


Technologie::~Technologie()
{
}

unsigned int Technologie::GetIdTechno()
{
	return IdTechno;
}

string Technologie::GetNomTechno()
{
	return NomTechno;
}

string Technologie::GetDescTechno()
{
	return DescTechno;
}

bool Technologie::GetTechnoDispo()
{
	return TechnoDispo;
}

void Technologie::SetIdTechno(unsigned int NewIdTechno)
{
	IdTechno = NewIdTechno;
}

void Technologie::SetNomTechno(string NewNomTechno)
{
	NomTechno = NewNomTechno;
}

void Technologie::SetDescTechno(string NewDescTechno)
{
	DescTechno = NewDescTechno;
}

void Technologie::SetTechnoDispo(bool NewDispo)
{
	TechnoDispo = NewDispo;
}