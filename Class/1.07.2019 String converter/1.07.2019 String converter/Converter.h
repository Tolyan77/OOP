#pragma once
#include<iostream>
using namespace std;
class StringConverter {
protected:
	char *arr;
public:
	StringConverter() { arr = nullptr; }
	StringConverter(char *New) {
		arr = new char[strlen(New) + 1];
		strcpy_s(arr, strlen(New) + 1, New);
	}
	~StringConverter() { delete[] arr; }

	void Show()
	{
		cout << "\n\t" << arr << endl;
	}

	virtual void Convert() = 0;
	virtual void ShowString() = 0;
};

class ASCLLCodeConverter : public StringConverter {
private:
	int *numbCon;
	int  sizeStr;
public:
	ASCLLCodeConverter() { numbCon = nullptr, sizeStr = 0; }
	ASCLLCodeConverter(char * NewStr) :StringConverter(NewStr){}
	~ASCLLCodeConverter() { delete[]numbCon; }

	void Convert();
	void ShowString() {
		cout << endl;
		for (int i = 0; i < sizeStr; i++)
		{
			cout << numbCon[i] << " ";
		}
		cout << endl;
	}
};

class RefleetCaseConverter : public StringConverter{
private:
	char *aRr;
public:
	RefleetCaseConverter() { aRr = nullptr; }
	RefleetCaseConverter(char * NewStr) :StringConverter(NewStr) {}
	~RefleetCaseConverter() { delete[] aRr; }

	void Convert();
	void ShowString() {
		cout << "\n\t" << aRr << endl;
	}
};
