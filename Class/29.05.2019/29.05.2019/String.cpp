#include "String.h"
#include<iostream>
using namespace std;

 String::String(const String & ctr) 
{
	 this->ten = ctr.ten;
	 str=new char[ten + 1];
	 for (int i = 0; i < ten; i++) {
		 str[i] = ctr.str[i];
	 }
	 str[ten] = '\0';
	 count++;
}
void String::SetStringFromKeybaid(){

	if (str != nullptr) {

		delete[]str;
	}
	char word[256];
	cout << "\n\tEnter word :"; 
	std::cin.getline(word, 256);
	ten = strlen(word);
	//delete[]str;
	str = new char[ten + 1];
	for (int i = 0; i < ten; i++) {
		str[i]=word[i];
	}
	str[ten] = '\0';
}
void String::ShowString()const
{
	cout << "\n\t" << str << endl;
}

void String::Delete()
{
	delete[]str;
	count--;
}
