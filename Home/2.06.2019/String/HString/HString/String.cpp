#include "String.h"
#include<iostream>
using namespace std;
Stringg::Stringg(char symbol, int Newsize)
{
	str[Newsize];
	for (int i = 0; i < size; i++) {
		str[i] = symbol;
	}
}

Stringg::Stringg(char* _str, int Newsize)
{
	str[Newsize];
	str = _str;
}

void Stringg::Show()
{
	cout << str << endl;
}

void Stringg::SetString(char* NewLine)
{
	
}
