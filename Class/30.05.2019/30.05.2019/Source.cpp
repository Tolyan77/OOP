#include<iostream>
using namespace std;
class MyClass {
private:
	int number;
public:
	MyClass() : number(0) {/* number = 0;*/ }
	MyClass(int r) :number(r) {}
	void Show()const {
		cout << number << endl;
	}
	MyClass Plus(const MyClass& other) {
		/*int res = this->number + other.number;
		MyClass c(res);
		return c;*/
		return MyClass(this->number + other.number);
	}
	//operator type - type - оператор для перевантаження!
	MyClass operator+(const MyClass& other) 
	{
		/*int res = this->number + other.number;
		MyClass c(res);
		return c;*/
		return MyClass(this->number + other.number);
	}
	MyClass operator+(const int other)
	{
		/*int res = this->number + other.number;
		MyClass c(res);
		return c;*/
		return (this->number + other);
	}
	MyClass operator*(const MyClass& other)
	{
		/*int res = this->number + other.number;
		MyClass c(res);
		return c;*/
		return MyClass(this->number * other.number);
	}
	MyClass operator/(const MyClass& other)
	{
		/*int res = this->number + other.number;
		MyClass c(res);
		return c;*/
		return MyClass(this->number / other.number);
	}MyClass operator-(const MyClass& other)
	{
		/*int res = this->number + other.number;
		MyClass c(res);
		return c;*/
		return MyClass(this->number - other.number);
	}
};
int main()
{
	MyClass m1(5);
	MyClass m2(10);
	
	MyClass res = m1.Plus(m2);
	res.Show();

	MyClass res2 = m1.operator+(m2);
	res2.Show();

	MyClass res3 = m1.operator+(44);	
	res3.Show();

	MyClass res4 = m1.operator/(44);
	res4.Show();

	MyClass res5 = m1.operator*(44);
	res5.Show();

	MyClass res6 = m1.operator-(44);
	res6.Show();
	


	system("pause");
	return 0;
}