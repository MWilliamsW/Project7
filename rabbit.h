#ifndef RABBIT_H_
#define RABBIT_H_
#include "Animal.h"
#include "Item.h"
#include <iostream>

class Rabbit : public Animal{
public:
	Rabbit();
	~Rabbit();
	bool Active;
	void RabbitRun(bool dead, bool hasEaten, int x, int y);

	
	 
};
#endif
