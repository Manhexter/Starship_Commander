#pragma once
#include <string>

using namespace std;

class Technologie
{
public:
	Technologie(unsigned int IdTechno, string NomTechno);
	Technologie(unsigned int IdTechno, string NomTechno, string DescTechno, bool TechnoDispo);
	~Technologie();
	unsigned int GetIdTechno();
	string GetNomTechno();
	string GetDescTechno();
	bool GetTechnoDispo();
	void SetIdTechno(unsigned int NewWIdTechno);
	void SetNomTechno(string NewNomTechno);
	void SetDescTechno(string NewDescTechno);
	void SetTechnoDispo(bool NewTechoDispo);
private:
	unsigned int IdTechno;
	string NomTechno;
	string DescTechno;
	bool TechnoDispo;
};

