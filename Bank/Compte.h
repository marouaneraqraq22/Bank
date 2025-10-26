#pragma once
#include <iostream>
using namespace std;

class Compte
{
private:
	string numcompte;
	float solde;
	string devise;
public:
	Compte(string, float, string);
	void afficher()const;


	~Compte();
};

