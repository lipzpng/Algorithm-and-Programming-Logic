/* 5. Escreva um programa que leia 10 numeros do teclado, armazene em vetor.
Depois calcule e apresente na tela a média aritmética dos valores no vetor.
E então apresente todos os numeros do vetor que são maiores do que a média juntamente com
seus respectivos índices 
*/

//Autor: Felipe Kadanos - 08/05/2025

#include <stdio.h>

int main() {
    int i, num[10], soma = 0;

    for (i = 0; i <= 9; i++) {
        printf("\nDigite um numero: ");
        scanf("%d", &num[i]);
        soma += num[i]; 
    }

	float media = (float)soma / 10;

    printf("\nMedia dos valores: %.2f\n", media);

    printf("\nNumeros maiores que a media:\n");
    for (i = 0; i <= 9; i++) {
        if (num[i] > media) {
            printf("\n Indice %d: %d", i+1, num[i]);
        }
    }
}
