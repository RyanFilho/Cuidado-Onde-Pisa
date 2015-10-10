#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <cmddisplay.h>
#include <time.h>
#include "npc.h"

float g_start;

// função placar() precisa de ajuste no clock,
// pois inicia a contagem antes do jogador escolher "1.Start".
// o resto da função está ok!

void placar (display *tela, int n_inimigos)
{
	float elapsed = (float) clock() / CLOCKS_PER_SEC;
	elapsed -= g_start;

	display_puts(tela, 0, 1, "%d inimigos", n_inimigos);
	display_puts(tela, 0, 0, "%.0f segundos vivo", elapsed);
}

// função verificar_morte() precisa de pequenos ajustes.

void verificar_morte (display *tela, int posicao[])
{
	if (
        posicao[1] > tela->height-2 || posicao[0] > tela->width-2 ||
        posicao[1] < 3              || posicao[0] < 1
        || tela->screen[posicao[1]*tela->width + posicao[0]] == 'X'
    ) {
		display_puts(tela, tela->width/2 - 6, tela->height/2,"Voce morreu!");
		display_show(tela);
		exit(0);
	}
}

//Função criar_inimigo() funcionando perfeitamente!

void criar_inimigo (display *tela, int inimigos[][2], int *n_inimigos)
{
	if (rand()% 5 == 0)
	{
        inimigos[*n_inimigos][0] = 1 + (rand() % tela->width  -2);
        inimigos[*n_inimigos][1] = 3 + (rand() % tela->height -4);
        (*n_inimigos)++;
	}
}

//Função Menu() funcionando perfeitamente!

void menu (display *tela)
{
	char code;
	display_clear(tela);
	display_puts(tela, tela->width/2 - 9, tela->height/2, "Cuidado onde pisa.");
	display_puts(tela, tela->width/2 - 9, tela->height/2 - 1, "Menu:");
	display_puts(tela, tela->width/2 - 5, tela->height/2 - 2, "1. Start");
	display_puts(tela, tela->width/2 - 5, tela->height/2 - 3, "2. Exit");
	display_show(tela);

	code = getch();

	while(code != '1')
	{
		if(code == '2')
			exit(0);
		printf("\nDigite um código valido: ");
		code = getch();
	}

	// Quando o jogo começa.
	g_start = clock() / CLOCKS_PER_SEC;
}