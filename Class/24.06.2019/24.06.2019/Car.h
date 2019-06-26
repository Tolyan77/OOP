#pragma once
#include<iostream>
#include<string.h>
using namespace std;

class Color {
private:
	string ColorCar;
public:
	Color() {}
	Color(){
		cout << "\n\t\t\t\tColor\n\tColor car :"; cin >> this->ColorCar;
	};
	void Show();
};

class Wheel {
	int diam;
	string type;
public:
	Wheel() {}
	Wheel(int number) {
		cout << "\n\t\t\t\tWheel" << number << "\n\tDiam :"; cin >> this->diam;
		cout << "\n\tType :"; cin >> this->type;
	}
	void Show(int number);
};

class Kuzov {
	string name;
	int numb;
public:
	Kuzov() {}
	Kuzov() {
		cout << "\n\t\t\t\tKuzov\n\tName :"; cin >> this->name;
		cout << "\n\tNumber :"; cin >> this->numb;
	};
	void Show();
};

class Car {
	Color color;
	Wheel wheel[4];
	Kuzov kuzov;
public:
	//Car(string, int, string, string, int);
	void ShowCar()
	{
		kuzov.Show();
		wheel[1].Show(1);
		wheel[2].Show(2);
		wheel[3].Show(3);
		wheel[4].Show(4);
		color.Show();
	}
};