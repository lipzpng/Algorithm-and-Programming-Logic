/* 9. Desafio de fazer um triangulo  com asterisco:
    * 
   * * 
  * * *
 * * * * 
* * * * * 
*/

//Autor: Felipe Kadanos - 10/04/2025

#include <stdio.h>

int main() {
    int i,j,k,num;

    printf("Digite o tamanho do triangulo: ");
    scanf("%d", &num);


    for (i = 1; i <= num; i++) {
        printf("\n");
        for (j = 1; j <= num - i; j++) {
        	printf(" ");
		}
        for (j = 1; j <= num - (num - i); j++) {
            printf("* ");
        }
    }
}
