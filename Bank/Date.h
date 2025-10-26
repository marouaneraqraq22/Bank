#pragma once
class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date(int, int, int);
	void afficher()const;
	int age()const;

	~Date();
};

