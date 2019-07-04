#include<iostream>

using namespace std;

int main()
{
	int coll, row;

	cin >> row;
	cin >> coll;


	int **arr = new int *[row];

	for (int i = 0; i < row; i++)
		arr[i] = new int[coll];


	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < coll; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = row - 1; i >= 0; i--)
	{
		for (int j = coll - 1; j >= 0; j--)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < row; i++) {
		delete[]arr[i];
	}
	delete[]arr;


	system("pause");
	return 0;
}		