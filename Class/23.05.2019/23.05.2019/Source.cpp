#include<iostream>
#include"Student.h"
#include "Group.h"
using namespace std;
int main(){
	//Student Student("Tolyan", 2001, "Zolotti'vska", 99);
	Student Student;
    Student.Fill();
    Student.Show();

	Group Group;
	Group.AddStudentGroup();
	//Group.ShowGroup();
	system("pause");
	return 0;
}