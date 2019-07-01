#include "Converter.h"
#include<iostream>
#include<string>
using namespace std;
void ASCLLCodeConverter::Convert()
{
	sizeStr = strlen(arr);
	numbCon = new int[sizeStr];
	for (int i = 0; i < sizeStr; i++) {
		numbCon[i] = int(arr[i]);
	}
}
void RefleetCaseConverter::Convert()
{
	aRr = new char[strlen(arr) + 1];

	for (int i = 0; i < strlen(arr); i++)
	{
		if (isupper(arr[i]))
			aRr[i] = tolower(arr[i]);
		else
			aRr[i] = toupper(arr[i]);
	}
	aRr[strlen(arr)] = '\0';
}
