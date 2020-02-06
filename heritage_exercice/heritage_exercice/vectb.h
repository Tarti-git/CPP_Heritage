#pragma once
#include "vect.h"

using namespace std;

class vectb : public vect
{
protected:
public:
	vectb(int d, int f);
	~vectb();
	int debut();
	int fin();
	int& operator [] (int nb);
};