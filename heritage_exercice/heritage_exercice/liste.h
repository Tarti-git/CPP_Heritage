#pragma once
#include <iostream>
#include <map>
#include <string>
#include <list>
#include "point.h"

using namespace std;

class liste
{
public :
	list<point> ma_list;
public :
	liste();
	~liste();
	void ajouter(point pt);
};
