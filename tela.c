#include <stdio.h>
#include <string.h>

// Criar tela.
void criar_tela (char tela[][50])
{
	int c, l;
	for (l = 0; l < 25; ++l)
		for (c = 0; c < 50; ++c)
			tela[l][c] = ' ';
			
	for (c = 0; c < 50; ++c)
		tela[0][c] = '#';
		
	for (l = 0; l < 25; ++l)
		tela[l][0] = '#';
		
	for (l = 0; l < 25; ++l)
		tela[l][49] = '#';
		
	for (c = 0; c < 50; ++c)
		tela[24][c] = '#';
}

// Mostrar tela.
void mostrar_tela (char tela[][50])
{
    char linha[51];
	int l, c;
	
	linha[50] = '\0';
	
	for (l = 0; l < 25; ++l)
	{
		for ( c = 0; c < 50; ++c)
			linha[c] = tela[l][c];
		
		printf("%s\n", linha);
	}
}
