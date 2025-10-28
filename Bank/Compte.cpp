#include "Compte.h"
#include <iostream>
#include "Client.h"
#include"Date.h"

using namespace std;


Compte::Compte(string N, float S, string D)
{   if(D=="MAD"||D=="EURO")
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

void Compte::Crediter(float versement)
{
	if(versement>0)
	this->solde =this->solde + versement;
}

void Compte::Debiter(float retrait)
{
	if (this->solde - retrait <= 0) {
		this->solde = this->solde - retrait;
	}
}

Compte::~Compte()
{
}
