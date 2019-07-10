#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class File {
	ifstream file;
	string str;
public:
	File(string Name);
	~File();
	void Show();
	void Read();
	void SearchWord();
};
void File::Read()
{
	string line;
	while (!file.eof()) {
		getline(file, line);
		str += line + '\n';
		cout << line << endl;
	}
}

inline void File::SearchWord()
{

}

File::File(string Name)
{
	file.open(Name, std::fstream::in);
	if (!file) {
		cerr << "\n\tFile Error" << endl;
		exit(1);
		system("pause");
	}
	else
		cout << "The file is all right!" << endl;
}

File::~File()
{
	file.close();
}

void File::Show()
{
	cout << str << endl;
}

