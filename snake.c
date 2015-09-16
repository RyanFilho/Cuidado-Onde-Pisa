#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "npc.c"
#include "tela.c"

#define CIMA 72
#define BAIXO 80
#define DIREITA 77
#define ESQUERDA 75

int main ()
{
	char tela[25][50];
	char direcao = 77;
	int posicao[2];
	criar_tela(tela);
	criar_cobra(tela , posicao);

	while(1){
		mostrar_tela(tela);


		while(kbhit()){
			direcao = getch();
		}
		switch(direcao){
			case  CIMA : mover_cima(tela, posicao);
			case  BAIXO : mover_baixo(tela, posicao);
			case  ESQUERDA : mover_esquerda(tela, posicao);
			case  DIREITA : mover_direita(tela, posicao);
		}

		Sleep(1);
		system("cls");

	}

	return 0;
}
