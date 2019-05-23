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
	void calcAge();
public:
	Student(string name, int YearOfBirth, string address);
	Student();
	void Fill();
	void Show();
};
