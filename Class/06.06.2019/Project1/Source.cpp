#include"Time12.h"
#include<iostream>
using namespace std;

ostream & operator<<(ostream & out, const Time & a)
{
	cout << a.hh << ":" << a.mm << ":" << a.ss << endl;
	return out;
}

ostream & operator<<(ostream & out, const Time12 & a)
{
	out << a.hh12 << ":" << a.mm12;
	if (a.pm == true)
	{
		out << " pm" << endl;
	}
	else
	{
		out << " am" << endl;
	}
	return out;
}



int main()
{
		Time a(8, 23, 56);
		Time12 b(18, 12, true);
	
		a.Show();
		b.Show();
	
		//a = b;
		b = a;
		cout<<a;
		cout<<b;




	system("pause");
	return 0;

}