#include <iostream>
#include "Wolf.h"

using namespace std;
class Wolf : public Animal{

Wolf::Wolf(){
	alive = true;
	lifeLength = 0;
	nextPosition(0,0);
	LastEaten = 0;
	hasEaten = false;
}

Wolf::~Wolf(){

}

void Wolf::WolfRun(bool dead, bool hasEaten, int x, int y){
	alive = dead;
	nextPosition(x,y);
	lifeLength++;

	if(LastEaten >= 20){
			dead = true;
			return;
		}
		if(noEaten >= 20 || (lifeLength > 800 && rand()%100 == 1)){

		  dead = true;
		}
		return; 
	
  int left = posX = 32;
  if(left < 0)
    left = 0;
  int right = posX + 32;
  if(right >=512)
    right = 511;
  int top = posY -32;
  if(top < 0)
    top = 0;
  int bottom = posY+32;
  if(bottom >= 512)
    bottom = 511;
  
		for(int i=left; i<=right; i++)
		{
		  for(int j = top; j<=bottom; i++)
		  {
		    if(gl->cell[i][j] -> animal -> isRabbit())
		    {
		      notEaten = 0;
		      posX = i;
		      posY = j;
		      gl ->cell[i][j] -> animal -> dead = true;
		      return;
		    }
		  }
		}
		gl->moveWolf(posX, posY);
}
