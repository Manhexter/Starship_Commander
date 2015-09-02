#pragma once
#include <queue>
#include "JeuSTC.h"
#include "MessageMoteur.h"

class Moteur
{
public:
	Moteur();
	Moteur(JeuSTC*);
	virtual ~Moteur();

	//Méthode pour recevoir les messages des différents moteurs
	void Reception_Message(MessageMoteur& mm) {
		listemessage.push(mm);
	}

	//Méthode de traitement de la liste des messages
	void TraiterListeMess() {
		while (!listemessage.empty())
		{
			MessageMoteur mm = listemessage.front();
			listemessage.pop;

			TraiterMessage(mm);
		}
	}

	//Traitement du moteur exécuté dans la boucle (à surcharger dans chaque moteur)
	virtual void frame() = 0;

	//Méthodes permettant l'envoie de message entre les moteurs
	void EnvoieMessGraphique(MessageMoteur&);
	void EnvoieMessJeu(MessageMoteur&);
	void EnvoieMessSon(MessageMoteur&);
	void EnvoieMessReseau(MessageMoteur&);

	//Ces methodes copient simplement les adresses dans les pointeurs pour lier les moteurs
	void Attacher_Moteur_Graphique(MoteurGraphique* PMotGraphique);
	void Attacher_Moteur_Son(MoteurSon* PMotSon);
	void Attacher_Moteur_Jeu(MoteurJeu* PMotJeu);
	void Attacher_Moteur_Reseau(MoteurReseau* PMotReseau);

protected:
	//Pointeur vers l'objet JeuSTC contenant
	JeuSTC *Jeu;
	//Pointeur vers chacuns des moteurs
	MoteurSon *PMotSon;
	MoteurGraphique *PMotGraphique;
	MoteurJeu *PMotJeu;
	MoteurReseau *PMotReseau;

	//File des messages à traiter
	std::queue<MessageMoteur> listemessage;

	//Methode pour le traitement d'un message (à surcharger dans chaque moteur)
	virtual void TraiterMessage(MessageMoteur&) = 0;

};

