#pragma once
#include<list>
#include <boost/thread.hpp> //class permettant de gérer la protection des données en multi-thread
#include"Moteur.h"
#include"MoteurSon.h"
#include"MoteurGraphique.h"
#include"MoteurJeu.h"
#include"MoteurReseau.h"

class JeuSTC
{
public:
	JeuSTC();
	~JeuSTC();
	void Execution();
	bool GetExecEnCours();
	void SetExecEnCours(bool NewStatut);
	void ArretJeu();
private:
	std::list<Moteur*> l_moteur;
	boost::mutex MutexEnCours;
	bool ExecEnCours;
	MoteurSon *MotSon;
	MoteurGraphique *MotGraphique;
	MoteurJeu *MotJeu;
	MoteurReseau *MotReseau;
};

