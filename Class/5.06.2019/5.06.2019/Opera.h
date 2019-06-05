#pragma once
class Opera {
private:
	int number1;
	int number2;

public:
	Opera() : number1(2), number2(2) {}
	Opera(int number1, int h) : number1(number1), number2(h) {}
	void Show() {
		cout << "num1 :" << number1 << "\nnum2 :" << number2 << endl;
	}
};