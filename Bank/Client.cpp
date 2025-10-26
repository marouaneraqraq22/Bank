#include "Client.h"
#include"Date.h"
#include"Compte.h"
using namespace std;
Client::Client(string N, string P, string C , Date *D, Compte *CP):date(D),nom(N),prenom(P),compte(CP),CIN(N)
{
}

void Client::afficher()const {
	cout << "Client " << endl;
	cout << "Nom :" << this->nom << endl;
	cout << "Prenom:" << this->prenom << endl;
	cout << "CIN:" << this->CIN << endl;
	cout << "age:" << this->date->age()<<endl;
	compte->afficher();
}

Client::~Client()
{

}
