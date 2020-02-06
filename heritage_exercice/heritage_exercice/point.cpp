#include "point.h"

std::ostream& operator<<(std::ostream& out, const point& pt)
{
	out << "[" << pt.x << ", " << pt.y << "]";
	return out;
}

point::~point()
{
}
