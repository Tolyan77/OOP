#pragma once
class SmartArray
{
private:
	int **arr;
	int size;
	//int col;
	//int row;

public:

	SmartArray();
	SmartArray(int, int, int);
	~SmartArray();
	SmartArray(SmartArray&& other);
	void Show();

	//void Add(int newArr[], int newRow);

	//int Max();

	//int Min();

	operator=(SmartArray && other);
};
