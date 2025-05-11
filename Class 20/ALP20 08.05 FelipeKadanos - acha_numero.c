/* 4. Escreva um programa que inicialize um vetor de 10 n�meros inteiros distintos.
Em seguida, leia um n�mero qualquer do teclado e apresente na tela o �ndice em que o n�mero
se encontra no vetor, ou ent�o a mensagem "N�o encontrado", se o n�mero n�o estiver
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
