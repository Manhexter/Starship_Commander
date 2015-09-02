#pragma once
#include <string>

using namespace std;

class Batiment
{
public:
	Batiment();
	Batiment(unsigned int IdBatiment, string NomBatiment);
	Batiment(unsigned int IdBatiment, string NomBatiment, string DescBatiment, unsigned int Productivite, bool BatDisponible);
	~Batiment();
	unsigned int GetIdBatiment();
	string GetNomBatiment();
	string GetDescBatiment();
	unsigned int GetProductivite();
	bool GetBatDisponible();
	void SetIdBatiment(unsigned int NewIdBatiment);
	void SetNomBatiment(string NewNomBatiment);
	void SetDescBatiment(string NewDescription);
	void SetProductivite(unsigned int NewProductivite);
	void SetBatDisponible(bool NewBatDisponible);
private:
	unsigned int IdBatiment;
	string NomBatiment;
	string DescBatiment;
	unsigned int Productivite;
	bool BatDisponible;
};

