/* 6. Escreva um programa que apresente na tela a tabuada de um n�mero lido do teclado.
Por exemplo, considerando que o n�mero lido � 2, o formato da apresenta��o deve ser o
seguinte: */

//Autor: Felipe Kadanos - 10/04/2025

#include <stdio.h>

int main() {
    int i,num;

    printf("Digite o numero que deseja saber a tabuada: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++) {
        printf("\n%d x %d = %d",num, i,(num*i));
    }
}
