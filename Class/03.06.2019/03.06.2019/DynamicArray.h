#pragma once
class DynamicArr
{
private:
	int *arr;
	int size;
public:

	DynamicArr();
	DynamicArr(int);
	DynamicArr(const DynamicArr & other);
	~DynamicArr();

	void RandFill();
	void ManualFill();
	void Show();

	//DynamicArr operator + (const DynamicArr & other)const;
	//DynamicArr &operator = (const DynamicArr & other);

	bool operator != (const DynamicArr & other)const;
	bool operator == (const DynamicArr & other)const;
	int &operator[](int index);
};
