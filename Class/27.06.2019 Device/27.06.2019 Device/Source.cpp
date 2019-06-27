#include<iostream>
#include"Figure.h"
using namespace std;

int main() {
	Figure * arr[4]{
		new Rectangle(6,7),
		new Circle(2),
		new RectangularTriangle(3,4),
		new Trapeze(4,5,6)
	};
	for (int i = 0; i < 4; i++) {
		cout << arr[i]->Area() << endl;
	}


	system("pause");
	return 0;
}