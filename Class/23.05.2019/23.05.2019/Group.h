#pragma once
#include<iostream>
#include<string>
#include"Student.h"
using namespace std;
class Group {
private:
	Student * arr = nullptr;
	string nameGroup;
	int count;
	string Specialization;
	double avgMark;
	void CalcAvgMark1();
public:
	Group() {};
	~Group() {};
	//void Print();
	void AddStudentGroup();
	/*void ShowGroup();*/

};