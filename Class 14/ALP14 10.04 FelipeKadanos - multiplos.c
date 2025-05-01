/* 3. Escreva um programa que mostre os números múltiplos de 5, de 9, e de 5 e 9 simultaneamente,
no intervalo de 1 até 100. */

/* Primeira tentativa:

int i;
	
    printf("Multiplos de 5 ou 9 de 1 a 100:\n");

    for (i=1;i<=100;i++) {
        if (i % 5 == 0 || i % 9 == 0) {
            printf("%d ", i);
        }
    }
*/

//Autor: Felipe Kadanos - 10/04/2025

#include <stdio.h>

int main() {
	int i;
	
    printf("Multiplos de 5 ou 9 de 1 a 100:\n");

    for (i=1;i<=100;i++) {
        if (i % 5 == 0) {
            printf("\n%d eh dividido por 5", i);
        }
        if (i % 9 == 0) {
            printf("\n%d eh dividido por 9", i);
        }
        if (i % 5 == 0 && i % 9 == 0) {
            printf("\n%d eh dividido por 5 e 9", i);
        }
    }
}
