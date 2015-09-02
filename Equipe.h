#pragma once
#include <string>

using namespace std;

class Equipe
{
public:
	Equipe(int IdEquipe, string NomEquipe);
	~Equipe();
	unsigned int GetIdEquipe();
	string GetNomEquipe();
	void SetIdEquipe(unsigned int NewIdEquipe);
	void SetNomEquipe(string NewNom);
private:
	unsigned int IdEquipe;
	string NomEquipe;
};

