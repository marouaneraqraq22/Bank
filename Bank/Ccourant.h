#pragma once
#include "Compte.h"
class Ccourant :public Compte
{
private:
	float plafond;
public:
	Ccourant(string, float, string, float);
	void debiter(float);
	void afficher()const;

};

