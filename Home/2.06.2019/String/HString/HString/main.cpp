#include<iostream>
#include"String.h"
#include<string>
using namespace std;
int main() {
	char symbol[255] = "Valentin tipa programist";
	Stringg s(symbol, 255);
	s.Show();

	system("pause");
	return 0;
}