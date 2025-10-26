#include "Compte.h"
#include <iostream>
#include "Client.h"
#include"Date.h"

using namespace std;


Compte::Compte(string N, float S, string D)
{
	this->devise = D;
	this->numcompte = N;
	this->solde = S;
}

void Compte::afficher()const
{
	cout << "Information du compte"<<endl;
	cout << "Numero de compte : " << numcompte<<endl;
	cout << "Solde:" << solde << " " << devise<<endl;
}

Compte::~Compte()
{
}
