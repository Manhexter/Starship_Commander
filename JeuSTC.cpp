#include "JeuSTC.h"

JeuSTC::JeuSTC()
{
	MotReseau = new MoteurReseau(this);
	MotJeu = new MoteurJeu(this);
	MotGraphique = new MoteurGraphique(this);
	MotSon = new MoteurSon(this);

	//Lien entre les différents moteurs
	MotReseau->Attacher_Moteur_Graphique(MotGraphique);
	MotReseau->Attacher_Moteur_Jeu(MotJeu);
	MotReseau->Attacher_Moteur_Son(MotSon);

	MotJeu->Attacher_Moteur_Reseau(MotReseau);
	MotJeu->Attacher_Moteur_Graphique(MotGraphique);
	MotJeu->Attacher_Moteur_Son(MotSon);

	MotGraphique->Attacher_Moteur_Reseau(MotReseau);
	MotGraphique->Attacher_Moteur_Jeu(MotJeu);
	MotGraphique->Attacher_Moteur_Son(MotSon);

	MotSon->Attacher_Moteur_Graphique(MotGraphique);
	MotSon->Attacher_Moteur_Jeu(MotJeu);
	MotSon->Attacher_Moteur_Reseau(MotReseau);
}


JeuSTC::~JeuSTC()
{
	delete MotReseau;
	delete MotJeu;
	delete MotGraphique;
	delete MotSon;
}

bool JeuSTC::GetExecEnCours()
{
	return ExecEnCours;
}

void JeuSTC::SetExecEnCours(bool NewStatut)
{
	ExecEnCours = NewStatut;
}

void JeuSTC::Execution()
{
	bool StatutExecActuelle = ExecEnCours;

	//Création du verrou pour l'accès au mutex
	boost::mutex::scoped_lock Verrou_Mutex(MutexEnCours);
	Verrou_Mutex.unlock();

	while (StatutExecActuelle)
	{
		MotReseau->frame();
		MotJeu->frame();
		MotGraphique->frame();
		MotSon->frame();
		Verrou_Mutex.lock();
		StatutExecActuelle = ExecEnCours;
		Verrou_Mutex.~unique_lock();
	}
}

void JeuSTC::ArretJeu()
{
	boost::mutex::scoped_lock Verrou_Mutex(MutexEnCours);
	ExecEnCours = false;
}