#include<iostream>
#include "Time.h"
using namespace std;
int main() {
	/*Time res;
	Time res1;*/

	/*res.Times(10, 10, 10);
	res1.Times(1, 10, 0);
	if (res > res1) {
		cout << "res > res1" << endl;
	}
	if(res < res1) {
		cout << "res < res1" << endl;
	}
	if (res == res1) {
		cout << "res == res1" << endl;
	}
	if (res != res1) {
		cout << "res != res1" << endl;
	}*/




	/*Time S;
	int sec = 0;
	cout << "\n\tEnter seconds :";
	cin >> sec;
	S.second(sec);
	S.ShowTime();*/

	
	Time C;
	C.Times(10, 10, 10);
	C.ShowTime();
	C.operator--();
	C.ShowTime();

	C.Times(10, 10, 10);
	C.ShowTime();
	C.operator++();
	C.ShowTime();

	C.Times(10, 10, 10);
	C.ShowTime();
	C.operator--(5);
	C.ShowTime();

	C.Times(10, 10, 10);
	C.ShowTime();
	C.operator++(5);
	C.ShowTime();

	system("pause");
	return 0;
}