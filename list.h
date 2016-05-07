#ifndef _LIST_H
#define _LIST_H

//cria nova lista
struct SOLDIER *createList();

//imprima lista na tela
void printList(struct SOLDIER *list);

//devolve n-nésimo elemento da lista
struct SOLDIER * getSoldierFromList(int n, struct SOLDIER *list);

//checa se lista está vazia
int isEmptyList(struct SOLDIER *list);

//adiciona soldado à lista
void addToList(struct SOLDIER *soldier, struct SOLDIER *list);

//preenche uma lista com n soldados
void fillList(int n, struct SOLDIER *list);

//remove n-ésimo soldado contado à partir do recebido e
//retorna o próximo
struct SOLDIER* removeFromList(int n, struct SOLDIER *soldier);

#endif
