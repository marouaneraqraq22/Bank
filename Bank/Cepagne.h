#pragma once
#include "Compte.h"
class Cepagne :public Compte
{
private :
	float Taux;
public:
	Cepagne(string, float, string, float);
	void debiter(float);
	void afficher()const;
	
};

