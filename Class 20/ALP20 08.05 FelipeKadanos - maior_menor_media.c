/* 3. Escreva um programa que inicialize um vetor com 25 números inteiros e apresente na tela o
menor valor, o maior valor, a soma dos valores e a média dos valores do vetor.
*/

//Autor: Felipe Kadanos - 08/05/2025

#include <stdio.h>

int main() {
    int i, num[24], soma = 0, maior, menor;

    for (i = 0; i <= 24; i++) {
        printf("\nDigite um numero: ");
        scanf("%d", &num[i]);

        if (i == 0) {
            menor = num[i];
            maior = num[i];
        }

    	maior = (num[i] > maior) ? num[i] : maior;
    	menor = (num[i] < menor) ? num[i] : menor;
        soma += num[i];
    }
    printf("\n\nMenor valor: %d", menor);
    printf("\nMaior valor: %d", maior);
    printf("\nMedia dos valores: %f", (float)soma/25);
}
