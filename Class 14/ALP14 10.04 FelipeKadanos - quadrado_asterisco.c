/* 7. Escreva um programa que leia o tamanho do lado de um quadrado e imprima um quadrado
daquele tamanho com asteriscos. O programa deve funcionar para quadrados com lados de
todos os tamanhos entre 1 e 20.
Por exemplo, para lado igual a 5:
* * * * *
* * * * *
* * * * *
* * * * *
* * * * * 
*/

//Autor: Felipe Kadanos - 10/04/2025

#include <stdio.h>

int main() {
    int i,j,num;

    printf("Digite o tamanho do quadrado: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        printf("\n");
        for (j = 1; j <= num; j++) {
            printf("* ");
        }
    }
}
