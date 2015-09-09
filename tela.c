#include <stdio.h>

// Criar tela.
void criar_tela (char tela[25][50])
{
	int i, k;
	for (i = 0; i < 25; ++i)
		for (k = 0; k < 50; ++k)
			tela[i][k] = ' ';
	for (i = 0; i < 50; ++i)
		tela[0][i] = '#';
	for (i = 0; i < 25; ++i)
		tela[i][0] = '#';
	for (i = 0; i < 25; ++i)
		tela[i][49] = '#';
	for (i = 0; i < 50; ++i)
		tela[24][i] = '#';
}

// Mostrar tela.
void mostrar_tela (char tela[25][50])
{
	int i, k;
	for (i = 0; i < 25; ++i)
	{
		for ( k = 0; k < 50; ++k)
			printf("%c", tela[i][k]);
		
		printf("\n");
	}
}

