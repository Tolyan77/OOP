#include "Header.h"

bool MyNumber::operator==(const MyNumber & other)
{
	return this->number == other.number;
}
bool MyNumber::operator!=(const MyNumber & other)
{
	if ( this->number != other.number)
		return true;
	else
		return false;
}
 