#include<iostream>
#include<vector>

using namespace std;
int main() {
	vector<int> v = { 1,2,3,4,5,6,7,8,9 };
	vector<int> v2 = { 10,11,12,13 };

	for (int item : v) {
		cout << item << " - ";
	}
	cout << endl;
	//v.erase(v.begin() + 1, v.begin() + 4);//Забратиз 1 до 4
	//v.insert(v.begin(), v2.begin(), v2.begin() + 3); //додати на початок
	v.insert(v.begin(), v2.begin(), v2.begin() + 2);
	v.insert(v.begin(), 5, 10);
	v.insert(v.end(), 777);

    v[0] = 999;
	v.push_back(444);

	cout << "\n\tSize: " << v.size() << endl;
	for (int item : v) {
		cout << item << " - ";
	}
	cout << endl;

	system("pause");
	return 0;
}