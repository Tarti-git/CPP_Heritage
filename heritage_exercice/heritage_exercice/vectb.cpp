#include "vectb.h"

vectb::vectb(int d, int f)
{
	std::vector<int>::iterator it = adr.begin();
	adr.insert(it, d);
	adr.push_back(f);
}

vectb::~vectb()
{
}

int vectb::debut()
{
	vector<int>::iterator it = adr.begin();
	return *it;
}

int vectb::fin()
{
	vector<int>::iterator it = adr.end() - 1;
	return *it;
}

int& vectb::operator[](int nb)
{
	vector<int>::iterator it = adr.begin() + nb;
	return(*it);
}
