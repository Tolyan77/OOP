#pragma once
class SmartArray
{
private:
	int **arr;
	int col;
	int row;
public:
	SmartArray();
	SmartArray(int, int, int);
	~SmartArray();
	void Show();
	void Add(int newArr[], int newRow);
	int Max();
	int Min();
};