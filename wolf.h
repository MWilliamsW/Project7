#ifndef WOLF_H_
#define WOLF_H_
#include "Animal.h"

class Wolf: public Animal{
public:
	Wolf();
	~Wolf();
	void WolfRun(bool dead,bool hasEaten, int x, int y );
};

