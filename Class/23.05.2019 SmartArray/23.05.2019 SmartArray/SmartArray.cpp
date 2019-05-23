#include "SmartArray.h"
SmartArray::SmartArray() {
	arr = nullptr;
	size = 0;
}
SmartArray::SmartArray(int value, int newSize) {
	size = newSize;
	arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = value;
	}
}
SmartArray::SmartArray(int * array, int newSize) {
	size = newSize;
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = array[i];
	}
}
void SmartArray::Show()
{
	for (int i = 0; i < size; i++)
	{
		cout << " " << arr[i];
	}
}
void SmartArray::AddOneArr() {
	int number;
	int * arrNew = new int[size + 1];
	cout << "\n\tEnter number :";
	cin >> number;
	for (int i = 0; i < size; i++) {
			arrNew[i] = arr[i];
	}
	arrNew[size + 1] = number;
	delete[]arr;
	arr = arrNew;
	size += 1;
}
void SmartArray::DeleteIndex() {
	int index;
	int * arrNew = new int[size - 1];
	cout << "\n\tEnter index :";
	cin >> index;
	for (int i = 0; i < size; i++) {
		if (i >= index) {
			arrNew[i] = arr[i + 1];
		}
		else{
			arrNew[i] = arr[i];
		}
	}
	delete[]arr;
	arr = arrNew;
	size -= 1;
}

