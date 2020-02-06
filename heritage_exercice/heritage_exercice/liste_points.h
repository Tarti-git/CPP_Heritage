#pragma once

#include "liste.h"
#include "point.h"

class liste_points : public liste, public point
{
public:
	void affiche();
};

