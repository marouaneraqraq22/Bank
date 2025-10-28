#include "Client.h"
#include"Date.h"
#include"Compte.h"
#include"Cepagne.h"
#include"Ccourant.h"
using namespace std;
int Client::nbreinstance = 0;
int Client::idcount = 0;
Client Client::Creator(string N, string P, string C, Date D, Cepagne CPP, Ccourant CCC)
{
	if (nbreinstance < 2) {
		return Client(N, P, C, D, CPP,CCC);
	}
	else {
		cout << "Impossible d ajouter un client"<<endl;
		exit;
	}
}
Client::Client(string N, string P, string C , Date D, Cepagne CPP, Ccourant CCC):date(D),nom(N),prenom(P),CP(CPP),CIN(N),CC(CCC)
{
	nbreinstance++;
	idcount++;
	numcli = idcount;
}

void Client::afficher()const {
	cout << "Client numero " << this->numcli<<endl;
	cout << "Nom :" << this->nom << endl;
	cout << "Prenom:" << this->prenom << endl;
	cout << "CIN:" << this->CIN << endl;
	cout << "age:" << this->date.age()<<endl;
	CP.afficher();
	CC.afficher();
}

Client::~Client()
{

}
