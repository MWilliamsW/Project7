/*
-PQ
-Global Time
-for loop that runs for 10,000 ticks
	--pop appropriate items and call run function
	--push items back into queue
	--increment items
*/

#include "Item.h"
#include "Animal.h"
#include <iostream>
#include <queue>
#include <vector>
#include

int main(){
priority_queue<Item*, vector<Item*>, compareItem> pq;
srand(time(0));
Item* item;
GrassLand grassland(450, 10, 4, 1, 1, pq);

//Add 
}
