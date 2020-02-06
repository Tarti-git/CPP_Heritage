#include "liste_points.h"

void liste_points::affiche()
{
    list<point>::iterator t;

    for (t = ma_list.begin(); t != ma_list.end(); ++t)
        cout << *t << endl;
}
