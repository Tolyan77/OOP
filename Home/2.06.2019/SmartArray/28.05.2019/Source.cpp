#include<iostream>
#include"SmartArray.h"
using namespace std;
int main()
{
	int * arr1 = new int[3];
	for (int i = 0; i < 3; i++)
	{
		arr1[i] = 2;
	}
	SmartArray arr(1, 3, 3);
	cout << "++++++++++++++++++++" << endl;
	arr.Show();
	cout << "++++++++++++++++++++" << endl;
	arr.AddRow(arr1, 1);
	cout << endl;
	arr.Show();
	/*cout << "++++++++++++++++++++" << endl;
	arr.DeleteRow(1);
	arr.Show();
*/


	/*int MyCol, MyRow;
	cout << "Enter col :"; cin >> MyCol;
	cout << "Enter row :"; cin >> MyRow;
	arr.DeleteElem(MyCol, MyRow);
	arr.Show();*/
	/*int NewCol, NewRow, NewNumber;
	cout << "Enter col :"; cin >> NewCol;
	cout << "Enter row :"; cin >> NewRow;
	cout << "Enter number :"; cin >> NewNumber;
	arr.AddElem(NewCol, NewRow, NewNumber);
	arr.Show();*/

	system("pause");
	return 0;
}