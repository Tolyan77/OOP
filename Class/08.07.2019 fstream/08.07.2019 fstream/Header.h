#pragma once
#include<string>
using namespace std;


class Driver
{
private:
	string name;
	int  age;
public:
	Driver(string name, int age) :name(name), age(age) {};
	void Show();

};




class Weel
{
private:
	int diameter;
	string type;
	int num;

public:
	Weel() {}
	Weel(int diameter, string type, int num) : diameter(diameter), type(type), num(num) {}
	void Show();
};

class Engine
{
private:
	int power;
	float volume;

public:
	Engine() {}
	Engine(int power, float volume) : power(power), volume(volume) {}
	void Show();
};

class Cab
{
private:
	string type;
	string color;

public:
	Cab() {}
	Cab(string type, string color) : type(type), color(color) {}
	void Show();
};

class Mark
{
private:
	string mark;
	string model;
	int year;

public:
	Mark() {}
	Mark(string mark, string model, int year) : mark(mark), model(model), year(year) {}
	void Show();
};

class Car
{
private:
	int count;
	Weel *weel;
	Engine engine;
	Cab cab;
	Mark mark;
	Driver *dr;

public:
	Car(int, int, string, int, float, string, string, string, string, int);
	~Car()
	{
		delete[]weel;
	}
	void Show();
	void AddDriver(Driver *dr);

};

ostream& operator<<(ostream& os, const Car& my)
{
	os.write((char*)&my, sizeof(my));
	return os;
}

istream& operator>>(istream& is, const Car& my)
{
	is.read((char*)&my, sizeof(my));
	return is;
}
