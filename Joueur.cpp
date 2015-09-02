#include "Joueur.h"

Joueur::Joueur()
{
}

Joueur::Joueur(unsigned int IdJoueurInitial, string NomJoueurInitial) :
	IdJoueur(IdJoueurInitial),
	NomJoueur(NomJoueurInitial),
	JoueurVivant(true)
{
}

Joueur::Joueur(unsigned int IdJoueurInitial, string NomJoueurInitial, bool StatutJoueur, Equipe EquipeInitial, Technologie TechnoInitiale) :
	IdJoueur(IdJoueurInitial),
	NomJoueur(NomJoueurInitial),
	JoueurVivant(StatutJoueur),
	EquipeJoueur(EquipeInitial),
	TechnoEnCours(TechnoInitiale)
{
}

Joueur::~Joueur()
{
}

unsigned int Joueur::GetIdJoueur()
{
	return IdJoueur;
}

string Joueur::GetNomJoueur()
{
	return NomJoueur;
}

bool Joueur::GetJoueurVivant()
{
	return JoueurVivant;
}

Equipe Joueur::GetEquipeJoueur()
{
	return EquipeJoueur;
}

Technologie Joueur::GetTechnoEnCours()
{
	return TechnoEnCours;
}

void Joueur::SetJoueurVivant(bool NewStatut)
{
	JoueurVivant = NewStatut;
}

void Joueur::SetTechnoEnCours(Technologie NewTechno)
{
	TechnoEnCours = NewTechno;
}