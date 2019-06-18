#pragma once

// ���� ��������
struct Element
{
	int num;		// ���
	Element * next;	// ��'���� � ��������� ���������
};

class List
{
private:
	Element * head;		// ������ ������ (������ �������)
	Element * tail;		// ������ ������ (������ �������)

public:
	// ����������� �� ������������
	List()
	{
		// �� ������� ������ �������,
		// ����� ������� �������� �� ����
		head = nullptr;
		tail = nullptr;
	}

	bool IsEmpty() const { return head == nullptr; }

	// ���������� �������� ������ ������
	void AddToEnd(int data);
	// ���������� �������� �� ������� ������
	void AddToBegin(int data);

	// ��������� ������ (������� ��������)
	void DeleteHead();

	// ����� ��� ��������
	void ShowList() const;
};