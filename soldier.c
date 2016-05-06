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
		printf("Memoria insuficiente para criar novo soldado. Por favor feche o google chrome!\n");
	}
    return soldier;
}

void printSoldier(struct SOLDIER* soldier){
    printf("Soldado: %d\n", (*soldier).number);
}
