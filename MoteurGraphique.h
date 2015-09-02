#pragma once
#include "JeuSTC.h"

class MoteurGraphique : public Moteur
{
public:
	MoteurGraphique();
	MoteurGraphique(JeuSTC* JeuCourant);
	~MoteurGraphique();
	void frame();
	void TraiterMessage(MessageMoteur&);
};

