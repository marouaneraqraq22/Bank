#pragma once
#include<iostream>
#include"Date.h"
#include"Compte.h"
using namespace std;
class Client
{
private:
	string nom;
	string prenom;
	string CIN;
	Date *date;
	Compte *compte;
public:
	Client(string, string, string, Date*,Compte*);
	void afficher()const;
	~Client();
};

