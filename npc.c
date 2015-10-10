#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "cmddisplay.h"
#include <time.h>
#include "npc.h"

// função placar() precisa de ajuste no clock,
// pois inicia a contagem antes do jogador escolher "1.Start".
// o resto da função está ok!
void placar(int n_inimigos)
{
	clock_t c, segundos;
	c = clock();
	segundos = c / CLOCKS_PER_SEC;
	
	printf("%d inimigos", n_inimigos);
	printf("\t\t\t %d segundos vivo\n", segundos++);
}

// função verificar_morte() precisa de pequenos ajustes.
void verificar_morte(display *tela, int posicao[])
{
	if (
        posicao[1] > tela->height-1 || posicao[0] > tela->width-1 ||
        posicao[1] < 1              || posicao[0] < 1 
    ) {
		system("cls");
		printf("\n\n\n\n\t\t\t Voce morreu !\n");
		exit(0);
	}
}


//Função criar_inimigo() funcionando perfeitamente!
void criar_inimigo(display *tela, int inimigos[][2], int *n_inimigos)
{
	if (rand()% 5 == 0)
	{
        inimigos[*n_inimigos][0] = 1 + rand() % 48;
        inimigos[*n_inimigos][1] = 1 + rand() % 23;
        (*n_inimigos)++;
	}
}

//Função Menu() funcionando perfeitamente!
void menu()
{
	char code;
	system("cls");
	printf("\n\n\t           Cuidado onde pisa\n\n");
	printf("\t                 Menu \n\n");
	printf("\t                1. Start\n");
	printf("\t                2. Exit\n");
	
	code = getch();
	
	while(code != '1')
	{
		if(code == '2')
			exit(0);
		printf("\nDigite um código valido: ");
		code = getch();
	}
}
