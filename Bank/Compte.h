#pragma once
#include <iostream>
using namespace std;

class Compte
{
protected:
	string numcompte;
	float solde;
	string devise;
public:
	Compte(string, float, string);
	void afficher()const;
	void Crediter(float);
	void Debiter(float);

	~Compte();
};

