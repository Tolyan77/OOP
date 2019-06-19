#include "List.h"
#include <iostream>
using namespace std;

void main()
{
	List list;

	list.AddTail(99);
	list.AddTail(10);
	list.AddTail(30);
	list.AddTail(31);
	list.AddTail(20);

	list.ShowList();
	cout << "--------------------\n";

	/*list.Add(1, 3);
	list.ShowList();
	cout << "--------------------\n";

	list.Add(2, 9);
	list.ShowList();
	cout << "--------------------\n";*/

	/*list.Add(2, 29);
	list.ShowList();
	cout << "--------------------\n";*/
	/*int g = 0;
	cout << "Kom :"; cin >> g;
	list.DeleteKom(g);
	list.ShowList();
	cout << "--------------------\n";*/
	/*int num = 0;
	cout << "Num :"; cin >> num;
	int index=list.Search(num);
	list.ShowList();
	cout << "--------------------\n";
	if (index != 0)
		cout << "Index your number :" << index << endl;
	else
		cout << "Index no exsist " << endl;*/
	list.Sort();
	list.ShowList();
	cout << "--------------------\n";
	system("pause");
}