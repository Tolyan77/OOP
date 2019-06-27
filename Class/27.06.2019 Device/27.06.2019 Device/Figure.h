#pragma once
#include<iostream>
using namespace std;
class Figure {
public:
	virtual float Area() = 0;
};

class Circle :public Figure {
private:
	float A;
public:
	Circle() :A(0) {}
	Circle(float Length) :A(Length) {}
	float Area() {
		Info();
		return (A*A) * 3.141;
	}
	void Info() {
		cout << "\n\t\t\t\tCircle\n\tA :" << A << endl;
	}
};

class Rectangle : public Figure {
private:
	float A;
	float B;
public:
	Rectangle() :A(0), B(0) {}
	Rectangle(float Cateches, float Hypotenuse) :A(Cateches), B(Hypotenuse) {}
	float Area() {
		Info();
		return A * B / 2;
	}
	void Info() {
		cout << "\n\t\t\t\tRectangle\n\tA :" << A << "\n\tB :" << B << endl;
	}
};

class RectangularTriangle : public Figure {
private:
	float A;
	float B;
public:
	RectangularTriangle() :A(0), B(0) {}
	RectangularTriangle(float Cateches, float Hypotenuse) :A(Cateches), B(Hypotenuse) {}
	float Area() {
		Info();
		return A * B / 2;
	}
	void Info() {
		cout << "\n\t\t\t\tRectangular Triangle\n\tA :" << A << "\n\tB :" << B << endl;
	}
};

class Trapeze : public Figure {
private:
	float A;
	float B;
	float C;
public:
	Trapeze() :A(0), B(0), C(0) {}
	Trapeze(float Cateches, float Hypotenuse, float C) :A(Cateches), B(Hypotenuse), C(C) {}
	float Area() {
		Info();
		return  ((float(A) + float(B)) / 2)*C;
	}
	void Info() {
		cout << "\n\t\t\t\t\tTrapeze\n\tA :" << A << "\n\tB :" << B << "\n\tC :" << C << endl;
	}
};