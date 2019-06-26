#include"Car.h"
#include<iostream>
using namespace std;
int main()
{
	Car car(4, 18, "Tire", 250, 4.3, "Cabrio", "Dark", "Ford", "Mustang", 2019, 1);

	Driver dr("Kaban", 300);

	car.Show();
	system("pause");
	return 0;
}