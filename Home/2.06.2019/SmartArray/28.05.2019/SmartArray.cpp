#include "SmartArray.h"
#include<iostream>
using namespace std;
SmartArray::SmartArray()
{
	arr = nullptr;
	arrSize = nullptr;
	int col = 0;
	int row = 0;
}
SmartArray::SmartArray(int value, int col, int row) 
{
	arr = new int* [row];
	arrSize = new int[row];
	for (int i = 0; i < col; i++)
	{
		arrSize[i] = row;
		arr[i] = new int[col];
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = value;
			value++;
		}
	}
	this->col = col;
	this->row = row;
}
SmartArray::~SmartArray()
{
	for (int i = 0; i < row; i++)
	{
		delete[]arr[i];
	}
	delete[]arrSize;
}
void SmartArray::Show()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < arrSize[i]; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void SmartArray::AddRow(int addArr[], int newRow)
{
	int* NewArrSize = new int[row + 1];
	int ** newArr = new int*[row + 1];
	for (int i = 0; i < row + 1; i++)
	{
		newArr[i] = new int[col];
		NewArrSize[i] = arrSize[i];
	}
	NewArrSize[row + 1] = col;
	for (int i = 0; i < newRow; i++)
	{
		newArr[i] = arr[i];
	}
	newArr[newRow] = addArr;
	for (int i = newRow; i < row; i++)
	{
		newArr[i + 1] = arr[i];
	}
	arrSize = NewArrSize;
	/*for (int i = 0; i < row+1; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << newArr[i][j] << "\t";
		}
		cout << endl;
	}
*/

/*arr = new int*[row + 1];
for (int i = 0; i < row + 1; i++)
{
	arr[i] = new int[col];
}


for (int i = 0; i < row+1; i++)
{
	arr[i] = newArr[i];
}*/
	arr = newArr;
	this->row++;
}

void SmartArray::DeleteRow( int newRow)
{
	int** newArr = new int* [row - 1];
	for (int i = 0; i < row; i++)
	{
		if (i < newRow)
			newArr[i] = arr[i];
		else
			newArr[i] = arr[i + 1];
	}
	arr = newArr;
	this->row--;
}


void SmartArray::DeleteElem(int NewCol, int NewRow)
{
	if (NewCol > col-1) {
		cout << "Error" << endl;
	}
    else
	{
		if (NewRow > row-1) {
			cout << "Error" << endl;
		}
		else{
			int* newArr = new int [row - 1];
			for (int i = 0; i < this->col; i++)
			{
				if (i >= NewCol)
					newArr[i] = arr[NewRow][i + 1];
				else
					newArr[i] = arr[NewRow][i];
			}
			for (int i = 0; i < col; i++) {
				arr[NewRow][i] = newArr[i];
			}
			arrSize[NewRow] = col - 1;
		}
	}
}
