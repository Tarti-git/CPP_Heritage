#include "vect.h"

vect::vect()
{
}

vect::~vect()
{
}

int& vect::operator[](int nb)
{
	vector<int>::iterator it = adr.begin() + nb;
	return(*it);
}
