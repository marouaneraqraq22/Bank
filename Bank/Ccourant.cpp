#include "Ccourant.h"

Ccourant::Ccourant(string Num, float S, string D, float P):Compte(Num,S,D),plafond(P)
{
}

void Ccourant::debiter(float retrait)
{
	if (this->devise == "MAD") {
		if (this->solde - retrait < 100) {
			this->solde = this->solde - retrait;
		}
		else {
			cout << "Impossible de debiter visiter votre agence" << endl;
		}
	}
	else if (this->devise == "EURO") {
		if (this->solde - retrait < 10) {
			this->solde = this->solde - retrait;
		}
		else {
			cout << "Impossible de debiter veuiller visiter votre agence" << endl;
		}
	}
}

void Ccourant::afficher() const {
	if (this->plafond != -1) {
		cout << "Compte courant" << endl;
		Compte::afficher();
		float S=0;
		if (this->devise == "MAD") S = 100;
		if (this->devise == "EURO") S = 10;
		cout << "Ton plafond est " << S << this->devise << endl;
	}
	else {
		cout << "vous n avez pas de compte Courant" << endl;
	}
}
