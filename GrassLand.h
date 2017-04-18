#ifndef GRASSLAND_H_
#define GRASSLAND_H_
#include <iostream>
#include "item.h"
#include "Wolf.h"
#include "Rabbit.h"

using namespace std;
class GrassLand
{
public:
	GrassLand();
	~GrassLand();

	int cell[SIZE][SIZE];
	int currTime;
	int numWolf;
	int numLazyRabbits;
	int numActiveRabbits;

	void GrassLandRun();
	void PrintCell();

	
};
#endif
