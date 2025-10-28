#pragma once
#include<iostream>
#include"Date.h"
#include"Compte.h"
using namespace std;
#include"Cepagne.h"
#include"Ccourant.h"
class Client
{
private:
	static int nbreinstance;
	static int idcount;
	int numcli;
	string nom;
	string prenom;
	string CIN;
	Date date;
	Cepagne CP;
	Ccourant CC;
	Client(string, string, string, Date, Cepagne,Ccourant);
public:
	static Client Creator(string, string, string, Date, Cepagne, Ccourant);
	void afficher()const;
	~Client();
};

