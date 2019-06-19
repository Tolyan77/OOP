#pragma once


// �����'����� ������
class List
{
private:
	// ���� ��������
	struct Element
	{
		int num;		// ���
		Element * next;	// ��'���� � ��������� ���������
		Element * prev;	// ��'���� � ��������� ���������
	};

	Element * head;		// ������ ������ (������ �������)
	Element * tail;		// ���� ������ (������� �������)

	int size;

public:
	// ����������� �� ������������
	List()
	{
		// �� ������� ������ �������,
		// ����� ������� �������� �� ����
		head = tail = nullptr;
		size = 0;
	}

	bool IsEmpty() const { return size == 0; }

	// ���������� �������� ������ ������
	void AddTail(int data);
	// ���������� �������� �� ������� ������
	void AddHead(int data);

	// ���������� �������� � �������
	void Add(int pos, int data);

	// ��������� ������ (������� ��������)
	void DeleteHead();

	// ����� ��� ��������
	void ShowList() const;

	// ��������� ����������
	void DeleteKom(int index);

	void DeleteTail();

	int Search(int number);

	void Sort();
};