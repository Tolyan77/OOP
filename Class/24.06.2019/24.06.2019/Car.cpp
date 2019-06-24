#include "Car.h"
#include<iostream>
#include<string>
using namespace std;

void Kuzov::Show()
{
	cout << "\n\t\t\t\tKuzov\n\tName :" << name << "\n\tNumber :" << numb << endl;
}


void Wheel::Show(int number)
{
	cout << "\n\t\t\t\tWheel" << number << "\n\tDiam :" << diam << "\n\tType :" << type << endl;
}	

void Color::Show()
{
	cout << "\n\t\t\t\tColor\n\tColor car :" << ColorCar << endl;
}

Car(string ColorCar, int diam, string type, string name, int numb) {

}