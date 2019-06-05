#include "Array.h"
#include<ctime>
#include<iostream>

using namespace std;

DynamicArr::DynamicArr()
{
	arr = nullptr;
	size = 0;
}

DynamicArr::DynamicArr(int size)
{
	arr = new int[size];
	this->size = size;
}

DynamicArr::DynamicArr(const DynamicArr & other)
{
	this->arr = new int[other.size];
	this->size = other.size;
	for (int i = 0; i < other.size; i++)
	{
		this->arr[i] = other.arr[i];
	}
}

DynamicArr::~DynamicArr()
{
	delete[]arr;
}

void DynamicArr::RandFill()
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void DynamicArr::ManualFill()
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter number" << endl;
		cin >> arr[i];
	}
}

void DynamicArr::Show()
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}
//
//DynamicArr DynamicArr::operator+(const DynamicArr & other)const
//{
//	DynamicArr newArr;
//	newArr.arr = new int[size * 2];
//	newArr.size = this->size + other.size;
//
//	for (int i = 0; i < this->size; i++)
//	{
//		newArr.arr[i] = this->arr[i];
//	}
//	for (int i = this->size; i < this->size + other.size; i++)
//	{
//		newArr.arr[i] = other.arr[i - size];
//	}
//	return newArr;
//}

//DynamicArr& DynamicArr::operator=(const DynamicArr & other)
//{
//	this->arr = new int[other.size];
//	this->size = other.size;
//	for (int i = 0; i < other.size; i++)
//	{
//		this->arr[i] = other.arr[i];
//	}
//	return *this;
//}
//
//bool DynamicArr::operator>(const DynamicArr & other) const
//{
//	return this->size > other.size;
//}
//
//bool DynamicArr::operator<(const DynamicArr & other) const
//{
//	return this->size < other.size;
//}
//
//bool DynamicArr::operator>=(const DynamicArr & other) const
//{
//	return this->size >= other.size;
//}
//
//bool DynamicArr::operator<=(const DynamicArr & other) const
//{
//	return this->size <= other.size;
//}
//
//bool DynamicArr::operator==(const DynamicArr & other) const
//{
//	if (this->size != other.size)
//	{
//		return false;
//	}
//	int count = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (this->arr[i] == other.arr[i])
//		{
//			count++;
//		}
//	}
//	if (count == size)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//bool DynamicArr::operator!=(const DynamicArr & other) const
//{
//	if (this->size == other.size)
//	{
//		return false;
//	}
//	int count = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (this->arr[i] != other.arr[i])
//		{
//			count++;
//		}
//	}
//	if (count == size)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}

//int &DynamicArr::operator[](int index)
//{
//	return arr[index];
//}
//
//void  DynamicArr::operator()(int index)
//{
//	for (int i = 0; i < size; i++) 
//		arr[i] += index;
//}
//
 DynamicArr::operator int()
{
	 int summa = 0;
	for (int i = 0; i < size; i++) {
		summa += arr[i];
	}
	return summa;
}

 DynamicArr::operator char*()
 {
	 char *str = new char[255];
	 for (int i = 0; i < size; i++) {
		 str[i] = arr[i];
	 }
	 str[size] = '\0';
	
	 return str;
 }

 

