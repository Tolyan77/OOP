#pragma once
#include<string>
#include<iostream>
#include<vector>
using namespace std;

struct TimeTrain
{
		int hh;
		int mm;

		TimeTrain(int h, int m) :hh(h), mm(m) {}
};

class Train
{
private:
    int numberTrain;
	string Place;
	TimeTrain Time;
public:
	Train(int NewNumber, string NewPlace, int h, int m) : numberTrain(NewNumber), Place(NewPlace), Time(h, m) {}
	void Show(Train trains) {
	}
};

class Railway
{
	vector<Train> trains;
public:
	 void Add(int NewNumber, string  NewPlace, int  h, int  m) {
		 Train NewTrain(NewNumber, NewPlace, h, m);
		 trains.push_back(NewTrain);
	 }
	 void ShowGener() {
		 cout << "\n\t\t\t\tTrains :" << endl;
		 for (int i = 0; i < trains.size(); i++) {
           			 
		 }
	 }


};














//
//void Train::Show() {
//
//	for (int item : numberTrain)
//	{
//		cout << NumberOfTrains << " - ";
//		cout << item << " - ";
//		for (string intem : arrPlace) {
//			cout << intem << " - ";
//		}
//	}
//}
//
