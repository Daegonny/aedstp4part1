#ifndef _LIST_H
#define _LIST_H

typedef struct LIST //estrutura LIST
{
    struct SOLDIER *soldiers; //soldados
    struct SOLDIER *first; //primeiro
    struct SOLDIER *last; //último
}SOLDIER;

//cria nova lista
struct LIST *createList();

struct LIST* createList();

//imprima lista na tela
void printList(struct LIST *list);

int isEmptyList(struct LIST *list);

void addToList(struct SOLDIER* soldier, struct LIST *list);

void removeFromList(struct SOLDIER* soldier, struct LIST *list);


#endif
