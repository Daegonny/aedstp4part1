#include "soldier.h"
#include "list.h"
#include "game.h"

int randomNumber(int n){
    return 1 + (rand() % (n));
}

void play(int n, struct SOLDIER* soldier, struct SOLDIER* list){
    struct SOLDIER *aux = removeFromList(n, soldier);
    printList(list);

    while(!isEmptyList(list)){
        aux = removeFromList(n, aux);
        printList(list);
    }
}
