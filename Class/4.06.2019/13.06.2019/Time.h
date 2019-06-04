#pragma once
#include<iostream>
using namespace std;
class Time {
private:
	int minutes;
	int hours;
	int seconds;
public:
	Time();

	void ShowTime();

	void Times(int hoursNew, int minutesNew, int secondsNew);
	//bool operator >(const Time & other)const;
	//bool operator <(const Time & other)const;
	////bool operator ==(const Time & other)const;
	//bool operator !=(const Time & other)const;
	
	//void second(int sec);

	/*void Add();
	void Add1();
	void Add2();
	void Add3();*/

	void Tran(int sec);

	void  operator--();
	void  operator++();
	Time& operator --(int i);
	Time& operator ++(int i);
};