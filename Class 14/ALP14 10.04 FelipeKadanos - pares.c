/* 4. Escreva um programa que mostre todos os n�meros pares existentes entre 1 e um n�mero lido
do teclado, bem como a quantidade de n�meros apresentados. */

//Autor: Felipe Kadanos - 10/04/2025

#include <stdio.h>

int main() {
    int i,num,conta = 0;

    printf("Escreva o numero maximo: ");
    scanf("%d", &num);
    
    printf("\n");

    for (i=1;i<=num;i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            conta++;
        }
    }

    printf("\n\nTotal de numeros pares: %d", conta);
}
