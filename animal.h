#ifndef ANIMAL_H_
#define ANIMAL_H_
#include "Item.h"

using namespace std;


class Animal{
	public:
	Animal();
	~Animal();
	int LastEaten;
	int nLastEaten(){
		return nLastEaten;
	}

	bool hasEaten;
	int nHasEaten;(){
		return nHasEaten;
	}
	int lifeLength;
	int nLifelength(){
		return nLifelength;

	}

	bool alive;
	bool nAlive(){
		return alive;
	}

	void dead(){
		Alive = false;
	}

	int position[2];
	void nextPosition(int x, int y){
		position[0] = x;
		position[1] = y;
	}

	int nX(){
		return position[0];
	}
	int nY(){
		return position[1];
	}
};
#endif
