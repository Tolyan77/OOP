#pragma once
class Stringg {
private:
	char* str;
	int size;
public:
	Stringg() :str(nullptr), size(0) {}
	Stringg(char  symbol, int size);
	Stringg(char* _str, int size);
	~Stringg() { delete str; size = 0; }
	void Show();
	void SetString(char* NewLine); 
	void SetStringFromKeyboard();
};