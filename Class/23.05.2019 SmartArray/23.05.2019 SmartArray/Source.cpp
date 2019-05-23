#include<iostream>
#include"SmartArray.h"
using namespace std;
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	SmartArray Arr(5,5);
	 Arr.AddOneArr();
	 Arr.Show();
	 Arr.DeleteIndex();


	/*SmartArray arr(5, 5);
	void AddOneArr();
	void Show();
	void DeleteIndex();


	
	SmartArray arr(arrNew, 5);
	void AddOneArr();
	void Show();
	void DeleteIndex();*/


	system("pause");
	return 0;
}