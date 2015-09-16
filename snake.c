#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "npc.h"
#include "tela.h"

#define CIMA 75
#define BAIXO 80
#define DIREITA 77
#define ESQUERDA -32

int main ()
{
	char tela[25][50];
	char direcao = 77;
	int posicao[2];
	criar_tela(tela);
	criar_cobra(tela , posicao);

	while(1){
		system("cls");
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
		verificar_morte(posicao);
		Sleep(10);
		system("cls");

	}

	return 0;
}
