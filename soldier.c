#include <stdio.h>
#include "soldier.h"

struct SOLDIER createSoldier(int number){
    struct SOLDIER *soldier;
    soldier = (struct SOLDIER) malloc(sizeof(struct SOLDIER));
    (*soldier).number = number;
    (*soldier).next = NULL;
}

void printSoldier(struct SOLDIER* soldier){
    printf("Soldado: %d\n", (*soldier).number);
}
