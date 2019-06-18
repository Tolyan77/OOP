#pragma once

// Опис елемента
struct Element
{
	int num;		// дані
	Element * next;	// зв'язок з наступним елементом
};

class List
{
private:
	Element * head;		// голова списка (перший елемент)
	Element * tail;		// голова списка (перший елемент)

public:
	// Конструктор по замовчуванню
	List()
	{
		// На початку список порожній,
		// тобто першого елемента не існує
		head = nullptr;
		tail = nullptr;
	}

	bool IsEmpty() const { return head == nullptr; }

	// Добавлення елемента вкінець списку
	void AddToEnd(int data);
	// Добавлення елемента на початок списку
	void AddToBegin(int data);

	// Видалення голови (першого елемента)
	void DeleteHead();

	// Показ всіх елементів
	void ShowList() const;
};