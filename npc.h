#ifndef NPC_H
#define NPC_H

void mover_baixo        (display *tela, int posicao[2]);
void mover_cima         (display *tela, int posicao[2]);
void mover_direita      (display *tela, int posicao[2]);
void mover_esquerda     (display *tela, int posicao[2]);

void verificar_morte    (int posicao[2]);
void criar_inimigo      (display *tela, int inimigos[][2], int *n_inimigos);

#endif
