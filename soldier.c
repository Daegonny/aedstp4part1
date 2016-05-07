#include <stdio.h>
#include <stdlib.h>
#include "soldier.h"

struct SOLDIER *createSoldier(int number){
    struct SOLDIER *soldier;
    soldier = (struct SOLDIER*) malloc(sizeof(struct SOLDIER));
    if(soldier != NULL)
    {
    	(*soldier).number = number;
    	(*soldier).next = NULL;
    }
	else
	{
		printf("Memoria insuficiente para criar novo soldado. Por favor feche o Google Chrome!\n");
	}
    return soldier;
}

int isSentinel(struct SOLDIER* soldier){
    return (*soldier).number == 0;
}

void printSoldier(struct SOLDIER *soldier){
    printf("Soldado: %d\n", (*soldier).number);
}
