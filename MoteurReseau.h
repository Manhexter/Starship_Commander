#pragma once
#include "JeuSTC.h"

class MoteurReseau : public Moteur
{
public:
	MoteurReseau();
	MoteurReseau(JeuSTC* JeuCourant);
	~MoteurReseau();
	void frame();
	void TraiterMessage(MessageMoteur&);
};

