#include "Equipe.h"



Equipe::Equipe(int IdInitial, string NomInitial) :
	IdEquipe(IdInitial),
	NomEquipe(NomInitial)
{
}


Equipe::~Equipe()
{
}

unsigned int Equipe::GetIdEquipe()
{
	return IdEquipe;
}

string Equipe::GetNomEquipe()
{
	return NomEquipe;
}

void Equipe::SetIdEquipe(unsigned int NewId)
{
	IdEquipe = NewId;
}

void Equipe::SetNomEquipe(string NewNom)
{
	NomEquipe = NewNom;
}