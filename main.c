#include <stdio.h>
#include <stdlib.h>
#include "soldier.h"
#include "list.h"

int main(int argc, char const *argv[]) {
    
    struct SOLDIER *list, *soldier1, *soldier2, *soldier3;
    
    list = createList();
    
    soldier1 = createSoldier(1);
    soldier2 = createSoldier(2);
    soldier3 = createSoldier(3);

    addToList(soldier1, list);
    addToList(soldier2, list);
    addToList(soldier3, list);

	//printSoldier(soldier1);
    
    printList(list);
  	return 0;  
}
