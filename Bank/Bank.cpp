#include <iostream>
#include "Compte.h"
#include "Client.h"
#include"Date.h"
int main()
{
	Date *D1=new Date(4, 6, 2002);
	Compte *CP1=new Compte("B1234", 9203.5, "MAD");
	Date* D2 = new Date(22, 9, 2005);
	Compte* CP2 = new Compte("B4723", 17290.95, "£");
	Client C1("MALAK", "TAZI", "BB193793", D1, CP1);
	Client C2("MAROUANE", "AMMAR", "BB793476", D2, CP2);
	cout << "client 1";
	C1.afficher();
	cout << "client 2";
	C2.afficher();
	delete CP1;
	delete D1;
}

