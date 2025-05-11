/* 2. Escreva um programa que inicialize um vetor com 10 números e apresente na tela apenas os
valores ímpares que aparecem no vetor.
*/

//Autor: Felipe Kadanos - 08/05/2025

#include <stdio.h>

int main() {
    int i, num[9];

    for (i = 0; i <= 9; i++) {
        printf("\nDigite um numero: ");
        scanf("%d", &num[i]);
    }
    printf("\n\nNumeros impares: \n");
    for (i = 0; i <= 9; i++) {
        (num[i] % 2 != 0) ? printf("\n %d", num[i]) : "";
    }
}
