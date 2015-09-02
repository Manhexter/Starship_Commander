#include "Moteur.h"



Moteur::Moteur()
{
}

Moteur::Moteur(JeuSTC* NewJeu)
{
}

Moteur::~Moteur()
{
}

void Moteur::Attacher_Moteur_Graphique(MoteurGraphique* NewPMotGraphique)
{
	PMotGraphique = NewPMotGraphique;
}

void Moteur::Attacher_Moteur_Jeu(MoteurJeu* NewPMotJeu)
{
	PMotJeu = NewPMotJeu;
}

void Moteur::Attacher_Moteur_Reseau(MoteurReseau* NewPMotReseau)
{
	PMotReseau = NewPMotReseau;
}

void Moteur::Attacher_Moteur_Son(MoteurSon* NewPMotSon)
{
	PMotSon = NewPMotSon;
}