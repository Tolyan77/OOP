#include"Student.h"
#include<iostream>
#include<string>
using namespace std;

Student::Student(string newName,int newYearOfBirth,string newAddress, double newRating)
{
	name = newName;
	age = 0;
	YearOfBirth = newYearOfBirth;
	address = newAddress;
	rating = newRating;
	calcAge();
}
Student::Student()
{
	system("cls");
	name = "--------";
	age = 0;
	YearOfBirth = 0;
	address = "-------";
	rating = 0;
}
double Student::GetRating()
{
	return rating;
}
void Student::calcAge() {
	age = 2019 - YearOfBirth;
}
void Student::Show(){
	system("cls");
	cout << "\n\tEnter name: "<< name;
	cout << "\n\tEnter year of birth: "<< YearOfBirth;
	cout << "\n\tEnter age: " << age;
	cout << "\n\tEnter address: " << address;
	cout << "\n\tEnter rating: " << rating << endl;
}
void Student::Fill() {
	system("cls");
	cout << "\n\tEnter name:"; cin >> name;
	cout << "\n\tEnter year of birth:"; cin >> YearOfBirth;
	cout << "\n\tEnter address:"; cin >> address;
	cout << "\n\tEnter rating: "; cin >> rating;
	calcAge();
}
