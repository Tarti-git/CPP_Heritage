#include "liste.h"

liste::liste()
{
}

liste::~liste()
{
}

void liste::ajouter(point pt)
{
	list<point>::iterator it = ma_list.begin();
	ma_list.insert(it, pt);
}
