/* 6. Escreva um programa que apresente na tela a tabuada de um número lido do teclado.
Por exemplo, considerando que o número lido é 2, o formato da apresentação deve ser o
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
