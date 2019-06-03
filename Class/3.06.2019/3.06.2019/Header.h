#pragma once
class MyNumber {
private:
	int size;
	int *arr;
public:
	MyNumber();
	~MyNumber();
	bool operator==(const MyNumber& other);
	bool operator!=(const MyNumber& other);
	
};