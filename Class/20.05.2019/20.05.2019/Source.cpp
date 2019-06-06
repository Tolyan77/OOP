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

void showPlayer(const Player Players) {
	cout << "Name :" << Players.name << endl;
	cout << "Surname :" << Players.surname << endl;
	cout << "Age :" << Players.age << endl;
	cout << "Games :" << Players.games << endl;
	cout << "Points :" << Players.points << endl;
	cout << "AvgPointPerGame :" << Players.avgPointPerGame << endl;
	cout << endl;
	cout << endl;
}

void showArr(const Player *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		showPlayer(arr[i]);
	}
}

double AveragePoint(const Player& p)
{
	return (double)p.games / p.points;
}

Player CreatePlayer()
{
	Player p;
	cout << "Please enter name :" << endl;
	cin >> p.name;

	cout << "Please enter surname :" << endl;
	cin >> p.surname;

	cout << "Please enter age :" << endl;
	cin >> p.age;

	cout << "Please enter games :" << endl;
	cin >> p.games;

	cout << "Please enter points :" << endl;
	cin >> p.points;
	p.avgPointPerGame = AveragePoint(p); 
	return p;
}

void Add(Player*&arr, int &size, const Player &newPlayer)
{
	Player *newArr = new Player[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}
	newArr[size] = newPlayer;
//	delete[]arr;
	arr = newArr;
	++size;
}

void Remove(Player*&arr, int &size, int ind)
{
	if (ind < 0 || ind >= size)
	{
		return;
	}

	int j = 0;
	Player *newArr = new Player[size - 1];
	
	for (int i = 0; i < size;)
	{
		if (i == ind)
		{
			i++;
			continue;
		}
		else
		{ 
			newArr[j] = arr[i];
			i++;
			j++;
		}
	}
	
	arr = newArr;
	--size;
}

int Search(Player*&arr, int &size)
{
	string search;
	cout << "Enter name" << endl;
	cin >>search;
	for (int i = 0; i < size; i++)
	{
		if (search == arr[i].name)
		{
			return i;
		}
	}
	cout << "Not found" << endl;
	return -1;
}

int loadArr(Player *&arr)
{
	int size;
	ifstream inn("Size.txt", ios_base::app);
	inn >> size;
	inn.close();

	Player *newArr = new Player[size];

	ifstream in("Players.txt", ios_base::in | ios_base::binary);

	for (int i = 0; i < size; i++)
	{
		in.read((char*)&newArr[i], sizeof(newArr[i]));
	}
 	in.close();
	arr = newArr;
	return size;
}

void saveArr(const Player *arr, int size)
{
	fstream clear_file("Players.txt", ios::out);
	clear_file.close();
	ofstream outone("Size.txt", ios_base::out);
	outone << size;
	outone.close();

	ofstream out("Players.txt", ios_base::app | ios_base::binary);
	for (int i = 0; i < size; i++)
	{
		out.write((char*)&arr[i], sizeof(arr[i]));
	}
	out.close();
}

int Menu()
{
	int choise;
	cout << "1 Add Player\n2 Find Player\n3 Remove Player\n4 Show All Player\n5 Save All Player\n6 Load All Player\n0 Exit" << endl; cin >> choise;
	system("cls");
	return choise;
}

int main()
{
	int size = 0;
	Player *arr = nullptr;
	int choise = -1;
	while (choise != 0)
	{
		choise = Menu();

		if (choise == 1)
		{
			Player p = CreatePlayer();
			Add(arr, size, p);
		}
		else if (choise == 2)
		{
			int search = Search(arr, size);
			if (search != -1)
			{
				showPlayer(arr[search]);
			}
		}
		else if (choise == 3)
		{
			int search = Search(arr, size);
			if (search != -1) {
				Remove(arr, size, search);
			}
		}
		else if (choise == 4)
		{
			showArr(arr, size);
		}
		else if (choise == 5)
		{
			saveArr(arr, size);
		}
		else if (choise == 6)
		{
			size = loadArr(arr);
		}
	}
	system("pause");
	return 0;
}