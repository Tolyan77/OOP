#pragma once
class Date {
private:
	int day;
	int year;
	int month;
public:
	Date() : day(0), year(0), month(0) {}
	Date(int day, int year, int month) { this->day = day; this->year = year; this->month = month; }
	void AddIhfo();
	int Days();
	int operator -(const Date& other)const;
	Date operator +(const int other);


};