#include <stdio.h>
#include <stdlib.h>
#include "soldier.h"

int main(int argc, char const *argv[]) {
    printf("Hello!!!\n"); 
    struct SOLDIER* soldier;
    soldier = createSoldier(23);
    printSoldier(soldier);
  	return 0;  
}
