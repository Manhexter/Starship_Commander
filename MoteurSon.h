#pragma once
#include "JeuSTC.h"

class MoteurSon : public Moteur
{
public:
	MoteurSon();
	MoteurSon(JeuSTC* JeuCourant);
	~MoteurSon();
	void frame();
	void TraiterMessage(MessageMoteur&);
};

