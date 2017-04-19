#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <queue>
#include <vector>
#include <stdlib.h>
using namespace std;

/*TODO:
->run function
->int priority
*/
class Item{
	int timeStamp;
	public:
	Item(){}
	bool operator<(Item* a){
		if(compare(a) < 0)
			return true;
		return false;
	}
	bool operator>(Item* a){
		if(compare(a) > 0)
			return true;
		return false;
	}
	bool operator==(Item* a){
		if(compare(a) == 0)
			return true;
		return false;
	}

	int compare(Item* a){
		if(timeStamp < a->timeStamp)
			return -1;
		if(timeStamp > a->timeStamp)
			return 1;
		return 0;
	}

	virtual void run(){
		cout << Item ran << endl;
	}
}

#endif


