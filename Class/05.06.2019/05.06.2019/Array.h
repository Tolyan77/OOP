#pragma once
#include <iostream>
using namespace std;
class DynamicArr
{
private:
	int *arr;
	int size;
	friend ostream& operator<<(ostream& out, const DynamicArr& r);
public:

	DynamicArr();
	DynamicArr(int);
	DynamicArr(const DynamicArr & other);
	~DynamicArr();

	void RandFill();
	void ManualFill();
	void Show();
	//DynamicArr operator + (const DynamicArr & other)const;
	//DynamicArr &operator = (const DynamicArr & other);

	/*bool operator> (const DynamicArr & other)const;
	bool operator< (const DynamicArr & other)const;
	bool operator>=(const DynamicArr & other)const;
	bool operator<=(const DynamicArr & other)const;
	bool operator==(const DynamicArr & other)const;
	bool operator!=(const DynamicArr & other)const;*/


	//int &operator [](int index);
	//void operator ()(int index);
	
	 operator int();
	 operator char*();

	 

};