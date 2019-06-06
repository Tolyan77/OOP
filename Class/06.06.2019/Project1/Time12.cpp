#include "Time12.h"
#include<iostream>
using namespace std;

void Time::Transfer(int sec)
{
	int tmp = 0;
	if (sec < 3600)
	{
		hh = 0;
		if (sec < 60)
		{
			mm = 0;
			this->ss = sec;
		}
		else
		{
			this->ss = sec % 60;
			mm = (sec - (sec % 60)) / 60;
		}
	}
	else
	{
		tmp = sec % 3600;
		hh = (sec - tmp) / 3600;
		if (tmp < 60)
		{
			mm = 0;
			this->ss = tmp;
		}
		else
		{
			this->ss = tmp % 60;
			mm = (tmp - (tmp % 60)) / 60;
		}
	}
}


void Time::SetHH(int hh)
{

	this->hh = hh;
}

void Time::SetMM(int mm)
{
	this->mm = mm;
}

Time::operator Time12()
{
	Time12 a;
	if (hh < 12)
	{
		a.SetPM(false);
		a.SetHH(hh);
	}
	else
	{
		a.SetPM(true);
		a.SetHH(hh - 12);
	}
	if (ss < 30)
	{
		a.SetMM(mm);
	}
	else
	{
		a.SetMM(mm + 1);
	}
	return a;
}

void Time::SetSS(int ss)
{
	this->ss = ss;
}

Time::Time()
{
	ss = 0;
	mm = 0;
	hh = 0;
}

Time::Time(int hh, int mm, int ss)
{
	this->ss = ss;
	this->mm = mm;
	this->hh = hh;
}

void Time::Show() const
{
	cout << hh << ":" << mm << ":" << ss << endl;
}



Time12::Time12()
{
	pm = false;
	mm12 = 0;
	hh12 = 0;
}

Time12::Time12(int hh, int mm, bool pm)
{
	if (hh < 12)
	{
		pm = false;
		this->hh12 = hh;
	}
	else
	{
		pm = true;
		this->hh12 = hh - 12;
	}


	this->mm12 = mm;
	this->pm = pm;
}

void Time12::SetHH(int hh)
{
	hh12 = hh;
}

void Time12::SetMM(int mm)
{
	mm12 = mm;
}

void Time12::SetPM(bool pm)
{
	this->pm = pm;
}

void Time12::Show() const
{
	cout << hh12 << ":" << mm12;
	if (pm == true)
	{
		cout << " pm" << endl;
	}
	else
	{
		cout << " am" << endl;
	}
}

Time12::operator Time()
{
	Time a;

	if (pm == true)
	{
		a.SetHH(this->hh12 + 12);
	}
	else
	{

		a.SetHH(this->hh12);
	}
	a.SetMM(this->mm12);
	a.SetSS(0);

	return a;
}