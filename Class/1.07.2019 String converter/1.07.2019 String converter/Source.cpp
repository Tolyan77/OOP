#include<iostream>
#include<string>
#include"Converter.h"
using namespace std;
int main() {
	char word[] = "GumaDgi";

	ASCLLCodeConverter ss(word);
	
	ss.Show();

	ss.Convert();

	ss.ShowString();

	RefleetCaseConverter bb(word);

	bb.Show();

	bb.Convert();

	bb.ShowString();

	system("pause");
	return 0;
}