/* 10. Desafio de fazer um prisma com asterisco:
        *
      *   *
    *   *   *
  *   *   *   *
*   *   *   *   *
  *   *   *   *
    *   *   *
      *   *
        *
*/

//Autor: Felipe Kadanos - 10/04/2025

#include <stdio.h>

int main() {
    int i,j,num;

    printf("Digite o tamanho do prisma: ");
    scanf("%d", &num);


    for (i = 1; i <= num; i++) {
        printf("\n");
        for (j = 1; j <= num - i; j++) {
        	printf("  ");
		}
        for (j = 1; j <= num - (num - i); j++) {
            printf("*   ");
        }
    }
    for (i = 1; i <= num - 1; i++) {
        printf("\n");
        for (j = 1; j <= num - (num - i); j++) {
        	printf("  ");
		}
        for (j = 1; j <= num - i; j++) {
            printf("*   ");
        }
    }
}
