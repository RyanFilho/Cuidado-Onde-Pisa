#include <stdio.h>
#include <stdlib.h>
#include <cmddisplay.h>
#include "npc.h"

/*void mover_baixo (display *tela, int posicao[2])
{
	tela[posicao[0]][posicao[1]] = ' ';
	posicao[0]++;
	if (tela[posicao[0]][posicao[1]] == 'X')
	{
		system("cls");
		printf("\n\n\n\n\n\n\n                                Voce morreu !\n");
		exit(1);
	}
	tela[posicao[0]][posicao[1]] = '@';
}

void mover_cima (display *tela, int posicao[2])
{
	tela[posicao[0]][posicao[1]] = ' ';
	posicao[0]--;
	if (tela[posicao[0]][posicao[1]] == 'X')
	{
		system("cls");
		printf("\n\n\n\n\n\n\n                                Voce morreu !\n");
		exit(1);
	}
	tela[posicao[0]][posicao[1]] = '@';
}

void mover_esquerda (display *tela, int posicao[2])
{
	tela[posicao[0]][posicao[1]] = ' ';
	posicao[1]--;
	if (tela[posicao[0]][posicao[1]] == 'X')
	{
		system("cls");
		printf("\n\n\n\n\n\n\n                                Voce morreu !\n");
		exit(1);
	}
	tela[posicao[0]][posicao[1]] = '@';
}

void mover_direita (display *tela, int posicao[2])
{
	tela[posicao[0]][posicao[1]] = ' ';
	posicao[1]++;
	if (tela[posicao[0]][posicao[1]] == 'X')
	{
		system("cls");
		printf("\n\n\n\n\n\n\n                                Voce morreu !\n");
		exit(1);
	}
	tela[posicao[0]][posicao[1]] = '@';
}
*/
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

void criar_inimigo(display *tela, int inimigos[][2], int *n_inimigos)
{
	if (1 || rand()% 5 == 0)
	{
        inimigos[*n_inimigos][0] = 1 + rand() % 48;
        inimigos[*n_inimigos][1] = 1 + rand() % 23;
        (*n_inimigos)++;
	}
}
