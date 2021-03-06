#ifndef _SOLDIER_H
#define _SOLDIER_H

typedef struct SOLDIER //estrutura soldado
{
    int number; //número
    struct SOLDIER *next; //apontador para pŕoximo
}SOLDIER;

//cria novo soldado
struct SOLDIER *createSoldier(int number);

//imprime um soldado na tela
void printSoldier(struct SOLDIER* soldier);

//checa se é sentinela
int isSentinel(struct SOLDIER* soldier);

#endif
