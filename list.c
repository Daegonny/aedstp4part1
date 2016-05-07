#include <stdio.h>
#include <stdlib.h>
#include "soldier.h"

struct SOLDIER *createList(){
	struct SOLDIER* list;
	list = (struct SOLDIER*) malloc(sizeof(struct SOLDIER));
	(*list).number = 0;
	(*list).next = list;
	return list;
}

void printList(struct SOLDIER *list){
	if(!isEmptyList()){
		struct SOLDIER *aux = (*list).next;
		while(aux != list){
			if(!isSentinel(aux))
				printSoldier(aux);
			aux = (*aux).next;
		}
		printf("\n");
	}
}

struct SOLDIER * getSoldierFromList(int n, struct SOLDIER *list){
	struct SOLDIER *aux = list;
	int i;
	for(i = 0; i < n; i++){
		aux = (*aux).next;
	}
	return aux;
}

int isEmptyList(struct SOLDIER *list){
	return list == (*list).next;
}

void addToList(struct SOLDIER *soldier, struct SOLDIER *list){
	struct SOLDIER *aux = (*list).next;
	while((*aux).next != list){
		aux = (*aux).next;
	}
	(*soldier).next = (*aux).next;
	(*aux).next = soldier;

}

void fillList(int n, struct SOLDIER *list){
	int i;
	for(i = 1; i <= n; i++){
		addToList(createSoldier(i), list);
	}
}

struct SOLDIER* removeFromList(int n, struct SOLDIER *soldier){
	struct SOLDIER *aux = soldier;
	if(n != 1){
		int i;
		for(i = 1; i < (n-1); i++){
			aux = (*aux).next;
			if(isSentinel(aux))//pular sentinela ao percorrer
				aux = (*aux).next;
		}
	}
	else{
		while((*aux).next != soldier){
			aux = (*aux).next;
		}
	}

	struct SOLDIER *it = (*aux).next;

	if(isSentinel(it)){// não remover sentinela
		aux = it;
		it = (*it).next;
	}

	(*aux).next = (*it).next;
	struct SOLDIER *next = (*aux).next;
	free(it);

	if(isSentinel(next))
		next = (*next).next;//não devolver sentinela

	return next;
}
