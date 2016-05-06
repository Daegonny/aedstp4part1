#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct LIST *createList(){
	struct LIST* list;
	list = (struct LIST*) malloc(sizeof(struct LIST));
	(*list).prox = NULL;
	(*list).first = NULL; 	
	(*list).last = NULL;
}

struct LIST* createList();

//imprima lista na tela
void printList(struct LIST *list);

int isEmptyList(struct LIST *list);

void addToList(struct SOLDIER* soldier, struct LIST *list);

void removeFromList(struct SOLDIER* soldier, struct LIST *list);
