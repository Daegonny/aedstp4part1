#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "soldier.h"
#include "list.h"
#include "game.h"
#define N  10//quantidade de soldados da lista

int main(int argc, char const *argv[]) {
    srand(time(0));

    //cria lista de soldados vazia
    struct SOLDIER *list = createList();

    //preenche lista com N soldados
    fillList(N, list);

    //exibe a lista
    printf("Lista preenchida com %d soldados:\n", N);
    printList(list);

    //número sorteado
    int raffledNumber = randomNumber(5);
    //soldado sorteado
    struct SOLDIER *raffledSoldier = getSoldierFromList(N ,list);
    printf("Soldado sorteado: %d\nNumero Sorteado: %d\n\n", (*raffledSoldier).number, raffledNumber);

    play(raffledNumber, raffledSoldier, list);
    return 0;
}
