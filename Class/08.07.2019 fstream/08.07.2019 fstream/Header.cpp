#include "Header.h"
#include<iostream>
using namespace std;

void Weel::Show()
{
	cout << "\tWEEL: " << num << endl;
	cout << "Diameter: " << diameter << endl;
	cout << "Type: " << type << endl;
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

Car::Car(int count, int diam, string type, int power, float volume, string typeCab, string color, string mark, string model, int year)
{
	this->weel = new Weel[count];
	this->count = count;
	for (int i = 0; i < count; i++)
	{
		this->weel[i] = Weel(diam, type, i + 1);
	}

	this->engine = Engine(power, volume);
	this->cab = Cab(typeCab, color);
	this->mark = Mark(mark, model, year);
	this->dr = nullptr;

}
void Car::Show()
{
	this->mark.Show();
	this->cab.Show();
	this->engine.Show();

	for (int i = 0; i < count; i++)
	{
		this->weel[i].Show();
	}
	if (this->dr != nullptr)
		this->dr->Show();
	else
	{
		cout << "No Driver" << endl;
	}
}

void Car::AddDriver(Driver * dr)
{
	this->dr = dr;
}

void Driver::Show()
{
	cout << "\tDRIVER" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}

