//#pragma once
#include"Student.h"
#include<iostream>
#include<string>
using namespace std;

Student::Student(string newName,int newYearOfBirth,string newAddress)
{
	name = newName;
	age = 0;
	YearOfBirth = newYearOfBirth;
	address = newAddress;
	calcAge();
}
Student::Student()
{
	name = "--------";
	age = 0;
	YearOfBirth = 0;
	address = "-------";
}
void Student::calcAge() {
	age = 2019 - YearOfBirth;
}
void Student::Show(){
	system("cls");
	cout << "\n\tEnter name: "<< name;
	cout << "\n\tEnter year of birth: "<< YearOfBirth;
	cout << "\n\tEnter age: " << age;
	cout << "\n\tEnter address: " << address << endl;
}
void Student::Fill() {
	cout << "\n\tEnter name:"; cin >> name;
	cout << "\n\tEnter year of birth:"; cin >> YearOfBirth;
	cout << "\n\tEnter address:"; cin >> address;
	calcAge();
}
