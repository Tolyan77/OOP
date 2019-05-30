#include "Date.h"
#include<iostream>
using namespace std;

void Date::AddIhfo()
{
	cout << "\n\tEnter day :"; cin >> day;
	cout << "\n\tEnter month :"; cin >> month;
	cout << "\n\tEnter year :"; cin >> year;
}

int Date::Days()
{
	int monthNew = 0, yearNew = 0, NewDay = 0;
	cout << "\n\tEnter day :"; cin >> NewDay;
	cout << "\n\tEnter month :"; cin >> monthNew;
	cout << "\n\tEnter year :"; cin >> yearNew;
	if (monthNew == 1 || monthNew == 3 || monthNew == 5 || monthNew == 7 || monthNew == 8 || monthNew == 10 || monthNew == 12) {
		NewDay += 31;
	}
	else if (monthNew == 4 || monthNew == 6 || monthNew == 9 || monthNew == 11) {
		NewDay += 30;
	}
	else if (monthNew == 2) {
		if (yearNew % 4 == 0)
		{
			if (yearNew % 100 == 0 & yearNew % 400 == 0) {
				NewDay += 29;
			}
			else if (yearNew % 100 != 0) {
				NewDay += 29;
			}
			else NewDay += 28;
		}
		else NewDay += 28;
	}
	else { cout << "ERROR" << endl; }
	if (yearNew % 4 == 0) {
		if (yearNew % 100 == 0 & yearNew % 400 == 0) {
			NewDay += 366 * yearNew;
		}
		else if (yearNew % 100 != 0) {
			NewDay += 366 * yearNew;
		}
		else NewDay += 365 * yearNew;
	}
	else NewDay += 365 * yearNew;
	return NewDay;
}

int Date::operator-(const Date& other) const
{

	return this->year - other.year;
}

Date Date::operator+(const int other)
{
	return Date();
}

