#include<iostream>
#include"String.h"
using namespace std;
int String::count=0;
int main() {
	{
		String ctr;
		cout << String::count << endl;
		ctr.SetStringFromKeybaid();
		ctr.ShowString();
		String str(ctr);
		cout << String::count << endl;
		str.ShowString();
		ctr.SetStringFromKeybaid();
		ctr.ShowString();
		str.ShowString();
		ctr.Delete();
	}
	cout << String::count << endl;
	system("pause");
	return 0;
}