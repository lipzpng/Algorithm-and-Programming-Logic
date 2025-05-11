/* 4. Escreva um programa que inicialize um vetor de 10 números inteiros distintos.
Em seguida, leia um número qualquer do teclado e apresente na tela o índice em que o número
se encontra no vetor, ou então a mensagem "Não encontrado", se o número não estiver
presente no vetor.
*/

//Autor: Felipe Kadanos - 08/05/2025

#include <stdio.h>

int main() {
    int i, array[10], num;

    for (i = 1; i <= 10; i++) {
        array[i] = i;
    }
    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++) {
        if (array[i] == num) {
            printf("\nNumero encontrado na posicao: %d", i);
            return 0;
        }
    }
    printf("\nNao encontrado", i);
}
