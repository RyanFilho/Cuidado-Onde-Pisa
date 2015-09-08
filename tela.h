#ifndef TELA_H
#define TELA_H

typedef struct
{
    char** cont;
    int larg;
    int alt;
} Tela;

void mostrar_tela (char tela[25][50]);
void criar_tela (char tela[25][50]);

#endif
