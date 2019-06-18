#include "List.h"
#include <iostream>

void main()
{
	List list;

	list.ShowList();
	list.AddToEnd(1);
	list.AddToEnd(2);
	list.AddToEnd(3);

	list.ShowList();

	list.AddToBegin(7);

	list.ShowList();

	system("pause");
}