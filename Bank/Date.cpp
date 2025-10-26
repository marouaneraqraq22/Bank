#include "Date.h"
#include<iostream>
#include "Client.h"

#include"Compte.h"
using namespace std;
Date::Date(int J, int M, int A):day(J),month(M),year(A)
{

}
void Date::afficher()const
{
	cout << "Date naissaneday" << day << "-" << month << "-" << year << endl;
}

int Date::age()const
{

	return 2025-this->year;	
}

Date::~Date()
{
}
