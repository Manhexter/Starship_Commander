#pragma once
#include <string>

using namespace std;

class Ressource
{
public:
	Ressource(unsigned int IdRessource, string NomRessource, string DescRessource);
	~Ressource();
	unsigned int GetIdRessource();
	string GetNomRessource();
	string GetDescRessource();
	void SetIdRessource(unsigned int NewIdRessource);
	void SetNomRessource(string NewNom);
	void SetDescRessource(string NewDesc);
private:
	unsigned int IdRessource;
	string NomRessource;
	string DescRessource;
};

