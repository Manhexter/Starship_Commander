#pragma once
#include "Point.h"
#include "Batiment.h"

class Planete : public Point
{
public:
	Planete();
	Planete(unsigned int CoordX, unsigned int CoordY, unsigned int CoordZ, string NomPlanete, Batiment Construction);
	~Planete();
	string GetNomPlanete();
	Batiment GetConstruction();
	void SetNomPlanete(string NewNom);
	void SetConstruction(Batiment NewConstruction);
private:
	string NomPlanete;
	Batiment Construction;
};

