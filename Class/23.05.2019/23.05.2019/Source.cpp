#include<iostream>
#include"Student.h"
using namespace std;
int main(){
	//Student Student("Tolyan", 2001, "Zolotti'vska");
	Student Student;
Student.Fill();
Student.Show();
	system("pause");
	return 0;
}