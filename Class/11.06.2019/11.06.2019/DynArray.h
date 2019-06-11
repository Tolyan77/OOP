#pragma once
#include<iostream>
using namespace std;
template<typename T>
class Array {
private:
	T *arr;
	static	int size;
	int maxSize;
public:
	Array();
	Array(Array& other);
	~Array();

	void Print();
	void Show();
	void Add();
	Array<T> & Array<T>::operator=(const Array<T> & other);
	//Array<T> & Array<T>::operator=(Array<T> && other);
};
template<typename T>
Array<T>::Array()
{
	arr = nullptr;
	size = 0;
}

template<typename T>
Array<T>::Array(Array<T> & other)
{
	this->arr = other.arr;
	this->size = other.size;
	other.arr = nullptr;
	other.size = 0;
}

template<typename T>
Array<T>::~Array()
{
	delete[]arr;
}

template<typename T>
void Array<T>::Print()
{
	for (int i = 0; i < size; i++) {
		arr[i] = 66 + i;
	}
}

template<typename T>
void Array<T>::Show()
{
	 cout << endl;
	 for (int i = 0; i < size; i++) {
		 cout << "\t" << arr[i];
	 }
	 cout << endl;
}

 template<typename T>
 void Array<T>::Add()
 {
	 if (size <= maxSize) {
		 int *arrNew = new int[size + 1];
		 for (int i = 0; i < size; i++) {
			 arr[i] = arrNew[i];
		 }
		 arrNew[size + 1] = 44;
		 delete[]arr;
		 arr = arrNew;
	 }
 }

 template <typename T>
 Array<T> & Array<T>::operator=(const Array<T> & other)
 {
	 if (this != &other)
	 {
		 delete arr;
		 arr = new  T;
	 }
	 *arr = *other.arr;
	 return *this;
 }

 //template <typename T>
 //Array<T> & Array<T>::operator=(Array<T> && other)
 //{
	// if (this->arr != other.arr)
	// {
	//	 arr = other.arr;
	//	 other.arr = nullptr;
	// }
	// return *this;
 //}
