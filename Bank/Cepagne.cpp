#include "Cepagne.h"

Cepagne::Cepagne(string num, float s, string d, float T):Compte(num,s,d),Taux(0)
{  
	if (T > 0 && T < 1) this->Taux = T;
}

void Cepagne::debiter(float retrait)
{
	if (this->devise == "MAD") {
		if (this->solde - retrait < 100000) {
			this->solde = this->solde - retrait;
		}
		else {
			cout << "Impossible de debiter visiter votre agence" << endl;
		}
	}
	else if (this->devise == "EURO") {
		if (this->solde - retrait < 10000) {
			this->solde = this->solde - retrait;
		}
		else {
			cout << "Impossible de debiter veuiller visiter votre agence" << endl;
		}
	}

}

void Cepagne::afficher()const {
	if (this->Taux != -1) {
		cout << "Compte epagne" << endl;
		Compte::afficher();
		cout << "Le taux d interet :" << this->Taux << endl;
		cout << "interet annuels: " << this->solde * this->Taux << endl;
	}
	else {
		cout << "vous n avez pas de compte Cepagne" << endl;
	}
}


