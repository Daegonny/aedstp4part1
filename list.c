#include <stdio.h>
#include <stdlib.h>
#include "soldier.h"

struct SOLDIER *createList(){
	struct SOLDIER* list;
	list = (struct SOLDIER*) malloc(sizeof(struct SOLDIER));
	(*list).next = list;
	return list;
}

struct SOLDIER* createList();

//imprima lista na tela
void printList(struct SOLDIER *list){
	struct SOLDIER *aux = (*list).next;
	while(aux != list){
		printSoldier(aux);
		aux = (*aux).next;
	}
}

int isEmptyList(struct SOLDIER *list){
	return list == (*list).next;
}

void addToList(struct SOLDIER *soldier, struct SOLDIER *list){
	struct SOLDIER *aux = (*list).next;
	while(aux != list){
		aux = (*aux).next;
	}
	(*soldier).next = (*aux).next;
	(*aux).next = soldier;
}

void removeFromList(struct SOLDIER *soldier, struct SOLDIER *list);
