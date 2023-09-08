// Davi Roberto De Sousa  cl203362
// Matheus Oliveira       cl203131
#include <stdio.h>
#include <stdlib.h>
#include "matriz.c"
#include <locale.h>

int main() {
    int linha=0, coluna=0, maior=0, diagonalPrincipal=0, diagonalSecundaria=0, quadradoMagico=0, elemIdenticos=0;

    int  matriz[4][4] =
{
        {4,15,14,1},
        {15,7,16,12},
        {14,16,10,8},
        {1,12,8,13}
};
setlocale(LC_ALL, "portuguese");
maior = ex01(matriz,4,&linha,&coluna);
printf("Maior elemento (%d:%d) = %d\n", linha, coluna, maior);

diagonalPrincipal = ex02(matriz,4);
printf("Soma da diagonal principal = %d\n", diagonalPrincipal);

diagonalSecundaria = ex03(matriz,4);
printf("Soma da diagonal secund�ria = %d\n", diagonalSecundaria);

quadradoMagico = ex04(matriz,4);
printf("� um quadrado m�gico? (1=verdadeiro / 0=false). %d\n", quadradoMagico);

elemIdenticos = ex05(matriz,4);
printf("Os elemento acima da diagonal principal s�o id�nticos aos elementos abaixo da diagonal principal?(1=Sim / 0=N�o). %d",elemIdenticos);
return 0;
};
