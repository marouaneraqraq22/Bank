#include <iostream>
#include "Compte.h"
#include "Client.h"
#include"Date.h"
#include"Cepagne.h"
#include"Ccourant.h"
int main()
{
	Date D1=Date(4, 6, 2002);
	Cepagne CP1("123321", 20000, "MAD", 0.1);
	Ccourant CC1("0",0, "****", -1);
	Client C1 = Client::Creator("ghita", "Rihali", "BR45745", D1, CP1,CC1);
	C1.afficher();
	
	
	
	


}

