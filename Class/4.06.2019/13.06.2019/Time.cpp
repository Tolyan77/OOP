#include "Time.h"

Time::Time()
{
	hours = 0;
	minutes = 0;
	seconds = 0;
}
void Time::ShowTime()
{
	cout << "\n\tHourse : " << hours << "\tMinutes :" << minutes << "\tSeconds :" << seconds << endl;
}
void Time::Times(int hoursNew, int minutesNew, int secondsNew)
{
	hours = hoursNew;
	minutes = minutesNew;
	seconds = secondsNew;
}
////void Time::Add2()
//{
//}
////void Time::Add3()
//{
//}
void Time::Tran(int sec) {
	bool exit = false;
	int F = sec;
	while (exit != true) {
		if (F > 3600) {
			this->hours++;
			F = F - 3600;
		}
		else if (F > 60) {
			this->minutes++;
			F = F - 60;
		}
		else
		{
			this->seconds = F;
			exit = true;
		}
	}
}
	//}
	//Time & Time::operator++()
	//{
	//	// TODO: insert return statement here
	//}
	//Time & Time::operator--()
	//{
	//	// TODO: insert return statement here
	//}
	//bool Time::operator>(const Time & other) const
	//{
	//	if (this->hours > other.hours)
	//		return true;
	//	else if (this->hours == other.hours)
	//	{
	//		if (this->minutes > other.minutes)
	//			return true;
	//		else if (this->minutes == other.minutes) {
	//			if (other.seconds > this->seconds)
	//				return true;
	//			else
	//				return false;
	//		}
	//		else
	//			return false;
	//	}
	//	else
	//		return false;
	//}
	//
	//bool Time::operator<(const Time & other) const
	//{
	//	if (this->hours < other.hours)
	//		return true;
	//	else if (this->hours == other.hours)
	//	{
	//		if (this->minutes < other.minutes)
	//			return true;
	//		else if (this->minutes == other.minutes) {
	//			if (other.seconds < this->seconds)
	//				return true;
	//			else
	//				return false;
	//		}
	//		else
	//			return false;
	//	}
	//	else
	//		return false;
	//}
	//
	//bool Time::operator==(const Time & other) const
	//{
	//	if (this->hours == other.hours)
	//	{
	//		 if (this->minutes == other.minutes) {
	//			if (other.seconds == this->seconds)
	//				return true;
	//			else
	//				return false;
	//		}
	//		else
	//			return false;
	//	}
	//	else
	//		return false;
	//}
	//
	//bool Time::operator!=(const Time & other) const
	//{
	//	if (this->hours == other.hours)
	//	{
	//		if (this->minutes == other.minutes) {
	//			if (other.seconds == this->seconds)
	//				return false;
	//			else
	//				return true;
	//		}
	//		else
	//			return true;
	//	}
	//	else
	//		return true;
	//}
	//
	//void Time::second(int sec)
	//{
	//	bool exit = false;
	//	while (exit != true) {
	//		if (sec > 3600) {
	//			this->hours++;
	//			sec =sec - 3600;
	//		}
	//		else if (sec > 60) {
	//			this->minutes++;
	//			sec =sec - 60;
	//		}
	//		else
	//		{
	//			this->seconds = sec;
	//			exit = true;
	//		}
	//	}
	//}
	//
	//void Time::Add()
	//{
	//	// COPY
	//	int sec = 0;
	//	sec = (hours * 3600) + (minutes * 60) + seconds;
	//	hours = 0, minutes = 0;
	//	sec++;
	//	Tran(sec);
	//
	//	// RETURN COPY
//}

void Time::operator++()
{
    int sec = (this->hours * 3600) + (this->minutes * 60) + (this->seconds);
    sec++;
    Tran(sec);
	
}

void Time::operator --()
{
	int sec = (this->hours * 3600) + (this->minutes * 60) + (this->seconds);
	sec--;
	Tran(sec);
}
Time& Time::operator ++(int i)
{
    Time tmp;
    tmp.hours = this->hours;
    tmp.minutes = this->minutes;
    tmp.seconds = this->seconds;

    int sec = (this->hours * 3600) + (this->minutes * 60) + (this->seconds);
    sec++;
    Tran(sec);

    return tmp;
}

Time& Time::operator --(int i)
{
    Time tmp;
    tmp.hours = this->hours;
    tmp.minutes = this->minutes;
    tmp.seconds = this->seconds;

    int sec = (this->hours * 3600) + (this->minutes * 60) + (this->seconds);
    sec--;
    Tran(sec);

    return tmp;
}


