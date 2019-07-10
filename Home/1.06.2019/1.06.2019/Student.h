#pragma once
#include<string>
using namespace std;
class Student
{
private:
	string name;
	string surname;
	string birDay;
	string addres;
	string mobNumber;
	float rating;
public:

	Student();

	void Show() const;

	void Fill();

	void SaveInFile();

	void LoadInFile();

	void SetName(string newName);
	void SetSurname(string newSurname);
	void SetBirDay(string newBirDay);
	void SetAddres(string newAddres);
	void SetMobNumber(string newMobNumber);
	void SetRating(float newRating);

	string GetName() const;
	string GetSurname() const;
	string GetBirDay() const;
	string GetAddres() const;
	string GetMobNumber() const;
	float GetRating() const;
};