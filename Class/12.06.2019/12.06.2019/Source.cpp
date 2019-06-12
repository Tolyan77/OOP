#include "Stack.h"
#include <iostream>
using namespace std;

void main()
{
	Stack st;
	bool Sum = true;
	char str[255];
	cin.getline(str,255);
	for (int i = 0; i < strlen(str); i++) 
	{
		if (str[i] == '{')
			st.Push(1);
		else if (str[i] == '(')
			st.Push(2);
		else if (str[i] == '[')
			st.Push(3);
		else if (str[i] == '}')
		{
			if (st.IsEmpty() || st.Pop() != 1)
			{
				Sum = false;
				break;
			}
		}
		else if (str[i] == ')')
		{
			if (st.IsEmpty() || st.Pop() != 2)
			{
				Sum = false;
				break;
			}
		}
		else if (str[i] == ']')
		{
			if (st.IsEmpty() || st.Pop() != 3)
			{
				Sum = false;
				break;
			}
		}
	}
	if (Sum == false)
	{
		cout << "ERROR" << endl;
	}
	else
	{
		if (st.IsEmpty())
		{
			cout << "DONE" << endl;
		}
		else if (!st.IsEmpty())
		{
			cout << "ERROR" << endl;
		}
	}
	system("pause");
}

// (fg(5)"иироро"