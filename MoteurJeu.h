#pragma once
#include "JeuSTC.h"

class MoteurJeu : public Moteur
{
public:
	MoteurJeu();
	MoteurJeu(JeuSTC* JeuCourant);
	~MoteurJeu();
	void frame();
	void TraiterMessage(MessageMoteur&);
};

