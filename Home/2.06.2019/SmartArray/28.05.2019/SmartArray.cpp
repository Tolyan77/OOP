#include "SmartArray.h"
#include<iostream>
using namespace std;
SmartArray::SmartArray()
{
	arr = nullptr;
	arrSize = nullptr;
	col = 0;
	row = 0;
}
SmartArray::SmartArray(int value, int newCol, int newRow) 
{
	arr = new int* [newRow];
	arrSize = new int[newRow];
	for (int i = 0; i < newCol; i++)
	{
		arrSize[i] = newRow;
		arr[i] = new int[newCol];
	}
	for (int i = 0; i < newRow; i++)
	{
		for (int j = 0; j < newCol; j++)
		{
			arr[i][j] = value;
			value++;
		}
	}
	this->col = newCol;
	this->row = newRow;
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
	for (int i = 0; i < row; i++)
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
	arrSize = new int[row + 1];
	for (int i = 0; i < row+1; i++)
	{
		arrSize[i] = NewArrSize[i];
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
	row++;
}

void SmartArray::AddElem(int NewCol, int NewRow,int NewNumber)
{
	if (NewCol > col - 1) {
		cout << "Error" << endl;
	}
	else
	{
	  int* newArr = new int[row + 1];
	  for (int i = 0; i < this->col; i++)
	  {
		  if (i >= NewCol)
			  newArr[i + 1] = arr[NewRow][i];
		  else
			  newArr[i] = arr[NewRow][i];
	  }
	  newArr[NewRow] = NewNumber;
	  for (int i = 0; i < col + 1; i++) {
		  arr[NewRow][i] = newArr[i];
	  }
	  arrSize[NewRow] = col + 1;
	}
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


void SmartArray::DeleteElem(int NewwCol, int NewwRow)
{
	if (NewwCol > col-1) {
		cout << "Error" << endl;
	}
    else
	{
		if (NewwRow > row-1) {
			cout << "Error" << endl;
		}
		else{
			int* newArr = new int [row - 1];
			for (int i = 0; i < this->col; i++)
			{
				if (i >= NewwCol)
					newArr[i] = arr[NewwRow][i + 1];
				else
					newArr[i] = arr[NewwRow][i];
			}
			for (int i = 0; i < col; i++) {
				arr[NewwRow][i] = newArr[i];
			}
			arrSize[NewwRow] = col - 1;
		}
	}
}
