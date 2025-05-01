/* 8. Desafio de fazer  triangulo com asterisco:
* 
* * 
* * *
* * * * 
* * * * * 
*/

//Autor: Felipe Kadanos - 10/04/2025

#include <stdio.h>

int main() {
    int i,j,num,dif;

    printf("Digite o tamanho do triangulo: ");
    scanf("%d", &num);


    for (i = 1; i <= num; i++) {
        dif = num - (num - i);
        printf("\n");
        for (j = 1; j <= dif; j++) {
            printf("* ");
        }
    }
}
