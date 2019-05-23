#pragma once
#include<iostream>
#include<string>
using namespace std;
class SmartArray {
private:
	int *arr;
	int size;
public:
	SmartArray();
	SmartArray(int value, int newSize);
	SmartArray(int * array, int newSize);
	void AddOneArr();
	void Show();
	void DeleteIndex();

  };