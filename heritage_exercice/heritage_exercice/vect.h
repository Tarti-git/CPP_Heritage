#pragma once
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class vect
{
public:
	vector<int> adr;
public:
	vect();
	~vect();
	int& operator [] (int nb);
};