#ifndef _LIST_H
#define _LIST_H

//cria nova lista
struct SOLDIER *createList();

//imprima lista na tela
void printList(struct SOLDIER *list);

int isEmptyList(struct SOLDIER *list);

void addToList(struct SOLDIER *soldier, struct SOLDIER *list);

void removeFromList(struct SOLDIER *soldier, struct SOLDIER *list);


#endif
