#ifndef _GAME_H
#define _GAME_H

//retorna número aleatório entre 1 e n
int randomNumber(int n);

//roda o jogo à partir de um n, um soldado inicial e uma lista
void play(int n, struct SOLDIER* soldier, struct SOLDIER* list);

#endif
