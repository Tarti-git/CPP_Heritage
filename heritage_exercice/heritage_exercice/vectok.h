#pragma once
#include "vect.h"

using namespace std;

class vectok : public vect
{
protected:
public:
	vectok(int d, int f);
	vectok(vectok &vect);
	~vectok();
	int debut();
	int fin();
	int& operator [] (int nb);
	vectok& operator = (vectok &vect);
};