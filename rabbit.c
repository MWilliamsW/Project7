#include <iostream>
#include "Rabbit.h"
#include "Animal.h"

using namespace std;

Rabbit::Rabbit(){
	alive =false;
	lifeLemgth = 0;
	nextPosition = (0,0);
	LastEaten = 0;
}

void Rabbit::run(bool dead, bool hasEaten, int x, int y){
	alive = dead;
	nextPosition(x.y);
	lifeLength++;

	if(hasEaten == false){
	LastEaten++;
	}

	if(lifeLength > 450 || LastEaten >= 5){
	alive = false;
	}
}
