/* 1. Escreva um programa que leia 5 números inteiros do teclado, armazene em um vetor, e
apresente na tela esses números em ordem inversa ao da leitura.
*/

//Autor: Felipe Kadanos - 08/05/2025

#include <stdio.h>

int main() {
    int i, num[4];

    for (i = 0; i <= 4; i++) {
        printf("\nDigite um numero: ");
        scanf("%d", &num[i]);
    }
    printf("\n\nNumeros em ordem inversa: \n");
    for (i = 4; i >= 0; i--) {
        printf("\n%d", num[i]);
    }
}
