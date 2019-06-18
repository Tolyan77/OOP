#include<iostream>
#include"SmartArray.h"
using namespace std;
int main()
{
	/*int * arr1 = new int[3];
	for (int i = 0; i < 3; i++)
	{
		arr1[i] = 2;
	}*/
	SmartArray arr(1, 3, 3);

	/*arr.Show();
	arr.AddRow(arr1, 1);
	cout << endl;
	arr.Show();*/
	arr.Show();
	int col, row;
	cout << "Enter col :"; cin >> col;
	cout << "Enter row :"; cin >> row;
	arr.DeleteElem(col, row);
	arr.Show();


	system("pause");
	return 0;
}