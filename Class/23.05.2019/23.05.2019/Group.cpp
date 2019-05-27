#include"Group.h"
#include"Student.h"
#include<iostream>
#include<string>
using namespace std;
//void Group::ShowGroup() {
//	
//}
void Group::CalcAvgMark1() {
	double Sered = 0;
	for (int i = 0; i < count; i++)
	{
		Sered = Sered + arr[i].GetRating();
	}
	avgMark = Sered / count;
}
void Group::AddStudentGroup() {
	Student *newArr = new Student [count + 1];
	for (int i = 0; i < count; i++)
	{
		newArr[i] = arr[i];
	}
	Student A;
	A.Fill();
	newArr[count] = A;
	delete[] arr;
	arr = newArr;
	++count;
}
//void Group::Print() {
//	cout << "\n\tEnter Count :"; cin >> count;
//	for (int i = 0; i < count; i++)
//	{
//		cout << "\n\tEnter Group :"; cin >> nameGroup;
//		cout << "\n\tEnter Specialization :"; cin >> Specialization;
//		cout << "\n\tEnter AvgMark :"; cin >> avgMark;
//		cout << "\n\tEnter CalcAvgMark :"; cin >> CalcAvgMark;
//	}
//}


