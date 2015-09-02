#pragma once
#include <string>
#include "Technologie.h"
#include "Equipe.h"

using namespace std;

class Joueur
{
public:
	Joueur();
	Joueur(unsigned int IdJoueur, string NomJoueur);
	Joueur(unsigned int IdJoueur, string NomJoueur, bool JoueurVivant, Equipe EquipeJoueur, Technologie TechnoEnCours);
	~Joueur();
	unsigned int GetIdJoueur();
	string GetNomJoueur();
	bool GetJoueurVivant();
	Equipe GetEquipeJoueur();
	Technologie GetTechnoEnCours();
	void SetJoueurVivant(bool NewStatut);
	void SetTechnoEnCours(Technologie NewTechno);
private:
	unsigned int IdJoueur;
	string NomJoueur;
	bool JoueurVivant;
	Equipe EquipeJoueur;
	Technologie TechnoEnCours;
};

