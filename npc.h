#ifndef NPC_H
#define NPC_H

void placar				(display *tela, int n_inimigos);
void menu				(display *tela);
void verificar_morte    (display *tela, int posicao[2]);
void criar_inimigo      (display *tela, int inimigos[][2], int *n_inimigos);

#endif
