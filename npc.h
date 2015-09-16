#ifndef NPC_H
#define NPC_H

void criar_cobra (char tela[25][50], int posicao[2]);
void mover_baixo (char tela[25][50], int posicao[2]);
void mover_cima (char tela[25][50], int posicao[2]);
void mover_esquerda (char tela[25][50], int posicao[2]);
void mover_direita (char tela[25][50], int posicao[2]);
void verificar_morte (int posicao[2]);

#endif
