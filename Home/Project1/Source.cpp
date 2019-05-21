#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct Player {

	string name;
	string surname;
	int age;
	int games;
	int points;
	double avgPointPerGame;
};
void showPlayer(const Player & Players) {

	cout << "Name:" << Players.name << endl;
    cout<< "Surname:" << Players.surname << endl;
	cout << "Age:" << Players.age << endl;
	cout << "Games:" << Players.games << endl;
	cout << "Points:" << Players.points << endl;
	cout << "AvgPointPerGame:" << Players.avgPointPerGame << endl;
}
double AveragePoint(const Player& p)
{	
	return (double)p.games / p.points;
}
Player CreatePlayer() 
{
		Player p;
		cout << "Please enter name:" << endl;
		cin >> p.name;

		cout << "Please enter surname:" << endl;
		cin >> p.surname;

		cout << "Please enter age:" << endl;
		cin >> p.age;

		cout << "Please enter games:" << endl;
		cin >> p.games;

		cout << "Please enter points:" << endl;
		cin >> p.points;

		p.avgPointPerGame = AveragePoint(p); // обчислення середньої кількості
		return p;
}
void SaveInFile(const Player & player)
{
	ofstream out("Players.txt", ios_base::out | ios_base::binary);

	out.write((char*)&player, sizeof(player));

	out.close();
}
void LoadFromFile(Player& p)
{
	ifstream in("Players.txt", ios_base::in|ios_base::binary);

	in.read((char*)&p, sizeof(Player));

	in.close();
}
void Add(Player *&arr, int &size,const Player& arrNew) {
	Player* newArr = new Player[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}
	newArr[size] = arrNew;
	delete[]arr;
	arr = newArr;
	size++;
}
void ShowPlayers(const Player * arr, int size)
{
	for (int i = 0; i < size; i++) {
		showPlayer(arr[i]);
		cout << "=======================================================" << endl;
	}
}
void Remove(Player * &arr, int &size, int index) {
	if (index < 0 || index >= size)
		return;
	Player* newArr = new Player[size - 1];
	for (int i = 0, b = 0; i < size; i++)
	{
		if (i != index) {
			newArr[b] = arr[i];
			b++;
		}
	}
}
int main()
{
	int size = 0;
	Player * arr = nullptr;
	Player p = CreatePlayer();
	Add(arr, size, p);
	ShowPlayers(arr, size);
	Player b = CreatePlayer();
	Add(arr, size, b);
	ShowPlayers(arr, size);
	Remove(arr, size, 0);
	SaveInFile(p);
	LoadFromFile(p);

	system("pause");
	return 0;
}