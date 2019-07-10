#include<iostream>
#include<fstream>
#include"Student.h"
using namespace std;

Student::Student()
{
	name = "No name";
	surname = "No surname";
	birDay = "No date";
	addres = "No addres";
	mobNumber = "No mobile number";
	rating = 0;
}

void Student::Show() const
{
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "Birday: " << birDay << endl;
	cout << "Addres: " << addres << endl;
	cout << "Mobile Number: " << mobNumber << endl;
	cout << "Rating: " << rating << endl;
}

void Student::Fill()
{
	cout << "Enter name: "; cin >> name;
	cout << "Enter surname: "; cin >> surname;
	cout << "Enter birday: "; cin >> birDay;
	cout << "Enter addres: "; cin >> addres;
	cout << "Enter mobile number: "; cin >> mobNumber;
	cout << "Enter rating: "; cin >> rating;
}

void Student::SaveInFile()
{
	ofstream out("Student.txt", ios_base::out);

	out << name << endl;
	out << surname << endl;
	out << birDay << endl;
	out << addres << endl;
	out << mobNumber << endl;
	out << rating << endl;

	out.close();
}

void Student::LoadInFile()
{
	ifstream in;
	in.open("Student.txt");
	for (int i = 0; i < 6; i++)
	{
		in >> name;
		in >> surname;
		in >> birDay;
		in >> addres;
		in >> mobNumber;
		in >> rating;
	}
	in.close();
}

void Student::SetName(string newName)
{
	name = newName;
}

void Student::SetSurname(string newSurname)
{
	surname = newSurname;
}

void Student::SetBirDay(string newBirDay)
{
	birDay = newBirDay;
}
void Student::SetAddres(string newAddres)
{
	addres = newAddres;
}
void Student::SetMobNumber(string newMobNumber)
{
	mobNumber = newMobNumber;
}
void Student::SetRating(float newRating)
{
	rating = newRating;
}

string Student::GetName() const
{
	return name;
}
string Student::GetSurname() const
{
	return surname;
}
string Student::GetBirDay() const
{
	return birDay;
}
string Student::GetAddres() const
{
	return addres;
}
string Student::GetMobNumber() const
{
	return mobNumber;
}
float Student::GetRating() const
{
	return rating;
}