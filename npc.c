#include <stdio.h>
#include <stdlib.h>
#include "npc.h"

void criar_cobra (char tela[25][50], int posicao[2])
{
	tela[12][25] = '@';
	posicao[0] = 12;
	posicao[1] = 25;
}

void mover_baixo (char tela[25][50], int posicao[2])
{
	tela[posicao[0]][posicao[1]] = ' ';
	posicao[0]++;
	tela[posicao[0]][posicao[1]] = '@';
}
void mover_cima (char tela[25][50], int posicao[2])
{
	tela[posicao[0]][posicao[1]] = ' ';
	posicao[0]--;
	tela[posicao[0]][posicao[1]] = '@';
}
void mover_esquerda (char tela[25][50], int posicao[2])
{
	tela[posicao[0]][posicao[1]] = ' ';
	posicao[1]--;
	tela[posicao[0]][posicao[1]] = '@';
}
void mover_direita (char tela[25][50], int posicao[2])
{
	tela[posicao[0]][posicao[1]] = ' ';
	posicao[1]++;
	tela[posicao[0]][posicao[1]] = '@';
}

void verificar_morte(int posicao[2])
{
	if (
        posicao[0] > 23 || posicao[1] > 48 ||
        posicao[0] < 1  || posicao[1] < 1 
    ) {
		system("cls");
		printf("\n\n\n\n\n\n\n                                Voce morreu !\n");
		exit(1);
	}
}
