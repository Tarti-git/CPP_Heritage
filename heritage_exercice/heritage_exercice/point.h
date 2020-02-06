#pragma once
#include <iostream>
#include <map>
#include <string>

using namespace std;

class point
{
	int x;
	int y;
public:
	point(int abs = 0, int ord = 0) { x = abs; y = ord; }
	~point();
	friend std::ostream& operator<<(std::ostream& out, const point& pt);
};

