#pragma once
#include<iostream>
#include<string>
using namespace std;
class Student {
private:
	string name;
	int age;
	int YearOfBirth;
	string address;
	double rating;
	void calcAge();
public:
	Student(string name, int YearOfBirth, string address, double rating);
	Student();
	double GetRating();
	void Fill();
	void Show();
};

