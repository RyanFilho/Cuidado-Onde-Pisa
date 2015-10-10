#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <cmddisplay.h>
#include <cmddraw.h>
#include "npc.h"

#define CIMA 72
#define BAIXO 80
#define DIREITA 77
#define ESQUERDA 75

// função velocidade() funcionando perfeitamente!
void velocidade(int *vel)
{
	if(rand()%5 == 1)
	*vel-=2;
}

void criar_bordas (display *tela)
{
    draw_line(tela, 0, 2, 0, tela->height-1);
    draw_line(tela, 0, 2, tela->width-1, 2);
    draw_line(tela, 0, tela->height-1, tela->width-1, tela->height-1);
    draw_line(tela, tela->width-1, tela->height-1, tela->width-1, 2);
}

void criar_cobra (display *tela)
{
    display_paint(tela, tela->width/2, tela->height/2);
}

int main ()
{
    display tela;
    display_create(&tela, 52, 25);

    char direcao = 77;
    int posicao[2] = {tela.width/2, tela.height/2 + 1};

    int inimigos[23*48 - 1][2];
    int n_inimigos = 0;
	int vel = 150;

	menu(&tela);
    criar_cobra(&tela);

    while (1) {
        display_clear(&tela);

        criar_inimigo(&tela, inimigos, &n_inimigos);
        int i;
        for (i = 0; i < n_inimigos; i++)
            display_put_raw(&tela, inimigos[i][0], inimigos[i][1], 'X');

        criar_bordas(&tela);
        display_paint(&tela, posicao[0], posicao[1]);

        while (kbhit()){
            char aux = getch();
            if (aux == CIMA || aux == BAIXO || aux == ESQUERDA || aux == DIREITA)
                direcao = aux;
        }

        switch (direcao)
        {
            case CIMA:
                posicao[1]++;
                break;
            case BAIXO:
                posicao[1]--;
                break;
            case ESQUERDA:
                posicao[0]--;
                break;
            case DIREITA:
                posicao[0]++;
                break;
        }

        velocidade(&vel);
        placar(&tela, n_inimigos);
        verificar_morte(&tela, posicao);
        display_show(&tela);
		Sleep(vel);
    }

    return 0;
}
