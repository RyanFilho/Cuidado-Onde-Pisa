#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#include "tela.c"
#include "npc.c"


int main ()
{
	char tela[25][50];	
	criar_tela(tela);
	criar_cobra(tela);
	while(1){
		mostrar_tela(tela);
		sleep(1);
		system("cls");

	}
	
	return 0;
}
