#pragma once

#include<iostream>

using namespace std;
class Time12;
class Time
{
private:

	int ss;
	int mm;
	int hh;
	friend ostream & operator<<(ostream & out, const Time & a);

public:


	Time();
	Time(int, int, int);


	void Show() const;
	void Transfer(int sec);
	operator Time12();
	void SetHH(int hh);
	void SetMM(int mm);
	void SetSS(int ss);


};

class Time12
{
private:

	bool pm;
	int mm12;
	int hh12;
	friend ostream & operator<<(ostream & out, const Time12 & a);
public:


	Time12();
	Time12(int, int, bool);
	void SetHH(int hh);
	void SetMM(int mm);
	void SetPM(bool pm);
	void Show() const;
	operator Time();


};