#include <stdio.h>
#include <stdlib.h>


void criar_cobra (char tela[][50], int posicao[2])
{
	tela[posicao[0]][posicao[1]] = '@';
}

void mover_baixo (char tela[][50], int posicao[2])
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
void mover_cima (char tela[][50], int posicao[2])
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
void mover_esquerda (char tela[][50], int posicao[2])
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
void mover_direita (char tela[][50], int posicao[2])
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
void criar_inimigo(char tela[][50])
{
	if ((1 + (rand() % 5) == 4))
	{
		tela[1 + (rand() % 23)][1 + (rand() % 48)] = 'X';
	}
	
}
