#include<iostream>
#include<string>
#include<fstream>
#include"Fileh.h"
using namespace std;
int main() {

	File S("File.txt");
	S.Read();
	S.Show();

	system("pause");
	return 0;
}