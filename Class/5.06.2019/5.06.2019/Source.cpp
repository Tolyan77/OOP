#include<iostream>
using namespace std;

class Opera {
private:
	int number1;
	int number2;

public:
	Opera() : number1(2), number2(2) {}
	Opera(int number1, int h) : number1(number1), number2(h) {}
	Opera(int v) : number1(v), number2(v) {}
	void Show() {
		cout << "num1 :" << number1 << "\nnum2 :" << number2 << endl;
	}
	operator int() {
		return number1 * number2;
	}
};
class Olega
{
public:
	Olega() : side(2) {}
	Olega(int s) : side(s) {} 
	void Show() {
		cout << "side1 :" << side << "\nside2 :" << side << endl;
	}
	operator Olega()
	{
		Opera rect(side, side);
		return rect;
	}
private:
	int side;
};





int main() {

	Olega sq(5);
	Opera rect(5);

	int valInt = 9;
	double valDouble = valInt;	

	valInt = (int)rect;			

	rect = (Olega)sq;


	system("pause");
	return 0;
}