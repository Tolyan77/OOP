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
	string typeW;
	int num;

public:
	Weel() {}
	Weel(int diameter, string typeW, int num) : diameter(diameter), typeW(typeW), num(num) {}
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

class Car :public Weel, public Engine, public Cab,public Mark
{
private:
	

public:
	Car(int diameter, int num, string typeW, int power, float volume, string mark, string model, string type, string color, int age, int year)
		:Weel(diameter, typeW, num), Engine(power, volume), Cab(type, color), Mark(mark, model, year) {}

	void Show();
};

