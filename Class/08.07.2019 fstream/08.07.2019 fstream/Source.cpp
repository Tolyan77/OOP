#include"Header.h"
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	//Car car(4, 18, "Tire", 250, 4.3, "Cabrio", "Dark", "Ford", "Mustang", 2019);

	//Driver dr("Anatoliu", 17);
	//car.AddDriver(&dr);
	//

	ofstream ofile("MyClass.txt", ios_base::out | ios_base::binary);
	ifstream ifile("MyClass.txt", ios_base::in | ios_base::binary);


	if (!ifile.is_open())
	{
		cerr << "File could`n open.";
		exit(1);
	}
	Car car;
	ifile >> car;

	car.Show();

	ifile >> car;
	car.Show();

	ifile.close();

	system("pause");
	return 0;
}