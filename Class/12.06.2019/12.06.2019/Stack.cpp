#include "Stack.h"

bool Stack::Push(int elem)
{
	if (!IsFull())
	{
		data[++topIndex] = elem;
		return true;
	}
	return false;
}

int Stack::Pop()
{
	if (!IsEmpty())
		return data[topIndex--];
	return 0;
}

int Stack::GetCount() const
{
	return topIndex + 1;
}

bool Stack::IsEmpty() const
{
	return topIndex == EMPTY;
}

bool Stack::IsFull() const
{
	return topIndex == FULL;
}

void Stack::Clear()
{
	topIndex = EMPTY;
}
