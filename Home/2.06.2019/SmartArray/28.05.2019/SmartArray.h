#pragma once
class SmartArray
{
private:
	int **arr;
	int col, row;
	int *arrSize;
public:
	SmartArray();
	SmartArray(int, int, int);
	~SmartArray();

	void Show();
	void AddRow(int newArr[], int newRow);
	void DeleteElem(int NewCol, int NewRow);
};