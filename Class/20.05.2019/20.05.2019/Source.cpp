#include<iostream>
#include<string>
#include<fstream>
using namespace std;
struct player
{
	string name;
	string surname;
	int age;
	int games;
	int points;
	int avgPointPerGame;
};
void Print(player One) {
	system("cls");
	cout << "\n\tName :" << One.name << "\n\tSurname :" << One.surname << "\n\tAge :" << One.age << "\n\tGames :" << One.games << "\n\tPoints :" << One.points << endl;
 }
player CreatePerson()
{
	player One;
		cout << "\n\tEnter name :";
		cin >> One.name;
		cout << "\n\tEnter surname :";
		cin >> One.surname;
		cout << "\n\tEnter age :";
		cin >> One.age;
		cout << "\n\tEnter games :";
		cin >> One.games;
		cout << "\n\tEnter points :";
		cin >> One.points;
		One.avgPointPerGame = One.points / One.games;
		return One;
}
player Read()
{
	player One;
	ifstream in("PersonGame.txt", ios_base::in);
	in >> One.name;
	in >> One.surname;
	in >> One.age;
	in >> One.games;
	in >> One.points;
	in.close();
	return One;
}
int main()
{
	string GamePerson = "PersonGame.txt";
	CreatePerson(); 
	player One = Read();
	Print(One);
	system("pause");
	return 0;
}/*
string name, surname;
int age, games, points, avgPointPerGame;
ofstream person;
person.open(GamePerson, ofstream::app);
if (!person.is_open()) { cout << "\n\tError file!" << endl; }
else {
	cout << "\n\tEnter name :";
	cin >> name;
	cout << "\n\tEnter surname :";
	cin >> surname;
	cout << "\n\tEnter age :";
	cin >> age;
	cout << "\n\tEnter games :";
	cin >> games;
	cout << "\n\tEnter points :";
	cin >> points;
	person << name << endl;
	person << surname << endl;
	person << age << endl;
	person << points << endl;
}
person.close();*/