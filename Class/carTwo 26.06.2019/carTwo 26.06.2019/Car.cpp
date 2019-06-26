#include "Car.h"
#include<iostream>
using namespace std;

void Weel::Show()
{
	cout << "\tWEEL: " << num << endl;
	cout << "Diameter: " << diameter << endl;
	cout << "Type: " << typeW << endl;
}

void Engine::Show()
{
	cout << "\tENGINE" << endl;
	cout << "Power: " << power << endl;
	cout << "Volume: " << volume << endl;
}

void Cab::Show()
{
	cout << "\tCAB" << endl;
	cout << "Type: " << type << endl;
	cout << "Color: " << color << endl;
}

void Mark::Show()
{
	cout << "\tMARK" << endl;
	cout << "Mark: " << mark << endl;
	cout << "Model: " << model << endl;
	cout << "Year: " << year << endl;
}

void Car::Show()
{
	Mark::Show();
	Cab::Show();
	Engine::Show();
	Weel::Show();
}

void Driver::Show()
{
	cout << "\tDRIVER" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}
