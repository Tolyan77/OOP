#include "List.h"
#include <iostream>
using std::cout;
using std::endl;

void List::AddTail(int data)
{
	Element * newElement = new Element;
	newElement->num = data;
	newElement->next = nullptr;
	newElement->prev = nullptr;

	if (head == nullptr)
		head = tail = newElement;
	else
	{
		tail->next = newElement;
		newElement->prev = tail;
		tail = newElement;
	}
	++size;
}

void List::AddHead(int data)
{
	Element * newElement = new Element;
	newElement->num = data;
	newElement->prev = nullptr;
	newElement->next = nullptr;

	if (head == nullptr)
		head = tail = newElement;
	else
	{
		newElement->next = head;
		head->prev = newElement;
		head = newElement;
	}
	++size;
}

void List::Add(int pos, int data)
{
	if (pos > size + 1 || pos <= 0)
		return;

	if (pos == 1)
	{
		AddHead(data);
		return;
	}
	if (pos == size + 1)
	{
		AddTail(data);
		return;
	}

	Element * newElem = new Element;
	newElem->num = data;

	Element * temp = head;
	/*int counter = 0;
	while (temp != nullptr && counter != pos - 2)
	{
		temp = temp->next;
		++counter;
	}*/

	for (int p = 1; p != pos; ++p)
		temp = temp->next;

	newElem->next = temp;
	newElem->prev = temp->prev;
	temp->prev->next = newElem;
	temp->prev = newElem;

	++size;
}

void List::DeleteHead()
{
	if (!IsEmpty())
	{
		Element * temp = head;
		head = head->next;
		head->prev = nullptr;
		delete temp;

		if (head == nullptr)
			tail = nullptr;

		--size;
	}
}

void List::ShowList() const
{
	if (IsEmpty())
	{
		cout << "List is empty!\n";
		return;
	}

	/*Element * current = head;
	do
	{
		cout << "Element: " << current->num << endl;
		current = current->next;
	} while (current->next != nullptr);*/

	for (Element * item = head; item != nullptr; item = item->next)
	{
		cout << "Element: " << item->num << endl;
	}

	/*Element * current = head;
	while (current != nullptr)
	{
		cout << "Element: " << current->num << endl;
		current = current->next;
	}*/
}

void List::DeleteKom(int index)
{
	if (!IsEmpty())
	{
		if (index > size || index <= 0)
		{
			cout << "ERROR" << endl;
			return;
		}
		if (index == 1) {
			DeleteHead();
			return;
		}
		if (index == size) {
			DeleteTail();
			return;
		}
		Element * temp = head;
		for (int p = 0; p != index-1; ++p)
			temp = temp->next;

		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		++size;
	}
}
void List::DeleteTail()
{
	if (!IsEmpty())
	{
		Element * temp = tail;
		tail = tail->prev;
		tail->next = nullptr;
		delete temp;
		if (tail == nullptr)
			head = nullptr;
        --size;
	}
}

int List::Search(int number)
{
	int index = 0;
	if (!IsEmpty())
	{
		for (Element * item = head; item != nullptr; item = item->next)
		{
			index++;
			if (item->num == number) {
				return index;
			}
		}
	}
	return 0;
}

void List::Sort()
{
	for (Element * i = head; i != nullptr; i = i->next) {
		for (Element * j = i->next; j != nullptr; j = j->next) {
			if (i->num > j->num) {
				int num = i->num;
				i->num = j->num;
				j->num = num;
			}
		}
	}

	/*Element * temp = head;
	int gg = 0;
	for (int i = 0; i < size; i++) {
		temp = head;
		for (int j = 0; i < size; i++) {
			if (temp->num > temp->next->num) {
				gg = temp->num;
				temp->num = temp->next->num;
				temp->next->num = gg;
			}
			temp = temp->next;
		}
	}*/
}
