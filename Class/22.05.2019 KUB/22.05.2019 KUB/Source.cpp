#include<iostream>
#include<string>
#include<Windows.h>
#include <conio.h>

using namespace std;

class Rectangl
{
private:
	int x;
	int y;
	int length;
	int width;
	int collor;

public:
	void SetCollor() {

		cout << "\n\tEnter Collor" << endl;
		cin >> collor;
	}
	void SetCursor(int x, int y) {
		COORD pos = { x, y };
		HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(output, pos);
	}
	void Print()
	{
		static const HANDLE consoleWndHandle = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(consoleWndHandle, collor);
		SetCursor(x, y);

		for (int i = 0; i < length; i++)
		{

			SetCursor(x, y + i);
			for (int j = 0; j < width; j++)
			{
				cout << char(219);
			}
		}
	}
	void Fill()
	{
		cout << "\n\tX: "; cin >> x;
		cout << "\n\tY: "; cin >> y;
		cout << "\n\tLength: "; cin >> length;
		cout << "\n\tWidth"; cin >> width;
	}
	void MoveRight()
	{
		x++;
	}
	void MoveLeft()
	{
		x--;
	}
	void MoveUp()
	{
		y--;
	}
	void MoveDown()
	{
		y++;
	}
};
int main()
{
	Rectangl One;
	One.Fill();
	One.SetCollor();
	int Move;
	while (true)
	{
		One.Print();

		Move = _getch();
		if (Move == 56)
		{
			One.MoveUp();
		}
		if (Move == 50)
		{
			One.MoveDown();
		}
		if (Move == 52)
		{
			One.MoveLeft();
		}
		if (Move == 54)
		{
			One.MoveRight();
		}
		system("cls");
	}
	return 0;
}