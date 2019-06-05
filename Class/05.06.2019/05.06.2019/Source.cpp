#include "Array.h"
using namespace std;

ostream& operator << (ostream& out, const DynamicArr& r) {

	for (int i = 0; i < r.size; i++)
	{
		cout << r.arr[i] << "\t";
	}
	return out;
}


int main() {
	/*DynamicArr arr(5);
	arr.RandFill();
	arr.Show();
	cout << endl;
	int number = arr[2];
	cout << number << endl;
	arr.operator()(5);
	arr.Show();*/
	DynamicArr arr(5);
	/*arr.RandFill();
	arr.Show();
	int num = (int)arr;
	cout << "\n\tsumma :" << num << endl;*/

	char * str = nullptr;
	str = arr;
	cout << str << endl;
	arr.RandFill();
	arr.Show();
	cout << endl;
	cout << arr;
	system("pause");
	return 0;
}