#pragma once
class String {
private:
	char * str=nullptr;
	int ten;
public:
	static int count;
	String() { count++; };
	String(const String & str);
	void SetStringFromKeybaid();
	void ShowString()const;
	void Delete();
    
};