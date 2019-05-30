#include<iostream>
#include"Date.h"
using namespace std;
int main() {
	Date omg;
	int numb1 = omg.Days();
	int numb2 = omg.Days();
	Date res = numb1.operator*(numb2);
	system("pause");
	return 0;
}