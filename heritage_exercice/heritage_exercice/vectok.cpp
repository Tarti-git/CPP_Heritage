#include "vectok.h"

vectok::vectok(int d, int f)
{
	std::vector<int>::iterator it = adr.begin();
	adr.insert(it, d);
	adr.push_back(f);
}

vectok::vectok(vectok& vect) : vect(vect)
{
	this->adr = vect.adr;
}

vectok::~vectok()
{
}

int vectok::debut()
{
	vector<int>::iterator it = adr.begin();
	return *it;
}

int vectok::fin()
{
	vector<int>::iterator it = adr.end() - 1;
	return *it;
}

int& vectok::operator[](int nb)
{
	vector<int>::iterator it = adr.begin() + nb;
	return(*it);
}

vectok& vectok::operator=(vectok &vect)
{
	this->adr = vect.adr;
	return *this;
}
