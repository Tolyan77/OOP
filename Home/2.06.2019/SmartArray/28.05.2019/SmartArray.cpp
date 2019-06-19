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
	arr = new int*[row];
	for (int i = 0; i < col; i++)
	{
		arr[i] = new int[col];
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = value;
			value++;
			//this->arrSize[i] = row;
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
	//delete[]arrSize;
}
void SmartArray::Show()
{
	int g = 0;
	for (int i = 0; i < row; i++, g++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void SmartArray::AddRow(int addArr[], int newRow)
{
	int ** newArr = new int*[row + 1];
	for (int i = 0; i < row + 1; i++)
	{
		newArr[i] = new int[col];
	}
	for (int i = 0; i < newRow; i++)
	{
		newArr[i] = arr[i];
	}
	newArr[newRow] = addArr;
	for (int i = newRow; i < row; i++)
	{
		newArr[i + 1] = arr[i];
	}
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
	if (NewCol > col || NewRow > row) {
		cout << "Error" << endl;
	}
	else
	{
		int size, k = 0;
		int** newArr = new int* [row];
		for (int i = 0; i < row; i++)
		{
			if (NewRow != row)
				newArr[i] = arr[i];
			else
			{
				for (int j = col - 1; j >= 0; j--) {
				
					if (NewCol == col)
					{
						//delete[] * arrSize;
					}
					newArr[i][j] = newArr[i][j];
				}
			}
		}
		
		arr = newArr;
	}
}
