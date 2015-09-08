#include "stdio.h"
#include "time.h"

void mostrarMatrix(char matrix[25][50]) {
	int i, k;
	for ( i = 0; i < 25; ++i)
	{
		for ( k = 0; k < 50; ++k)
		{

			printf("%c", matrix[i][k]);

		}
		printf("\n");
	}
}

void criarMatrix(char matrix[25][50]) {
	int i, k;
	for ( i = 0; i < 25; ++i)
		for ( k = 0; k < 50; ++k)
			matrix[i][k] = ' ';
	for ( i = 0; i < 50; ++i)
		matrix[0][i] = '#';
	for ( i = 0; i < 25; ++i)
		matrix[i][0] = '#';
	for ( i = 0; i < 25; ++i)
		matrix[i][49] = '#';
	for ( i = 0; i < 50; ++i)
		matrix[24][i] = '#';
}

int main(int argc, char const *argv[])
{

	char matrix[25][50];
	criarMatrix(matrix);
	while(1)
	{
		system("cls");
		mostrarMatrix(matrix);
		sleep(100);
	}
	return 0;
}