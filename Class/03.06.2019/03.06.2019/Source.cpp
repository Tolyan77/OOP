#include"DynamicArray.h"
#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	srand(unsigned(time(NULL)));
	
	DynamicArr arr1(5);
	DynamicArr arr2(5);
	DynamicArr arr3;
	DynamicArr arr4;

	arr1.RandFill();
	arr1.Show();
	cout << endl;
	arr2.RandFill();
	arr2.Show();
	/*cout << endl << "=";
	arr3 = arr1;
	arr3.Show();
	cout << endl << "+";
	arr4 = arr1 + arr2;
	arr4.Show();
*/
	/*if (arr1 != arr2) {
		cout << "++++++++" << endl;
	}*/
	cout << endl << arr1[2] << endl;
	arr1[2] = 99;
	arr1.Show();
	




	system("pause");
	return 0;
}