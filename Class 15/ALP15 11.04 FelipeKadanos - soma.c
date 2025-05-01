/* 1. Escreva um algoritmo em pseudocódigo que some os números fornecidos pelo usuário até
que o número lido seja igual a zero, mostrando o resultado da soma a cada iteração. Ao final,
mostre a quantidade de valores somados.
Em seguida, transcreva para a linguagem C. */

/*  
ALGORITMO soma
VAR
    INTEIRO num<-1,soma<-0,conta<-0;

    ENQUANTO (num != 0) {
        ESCREVA("Digite um numero: ");
        LEIA(num);

        SE (soma != 0 && num != 0) ENTAO
            ESCREVA("A soma de ",soma," + ",num," eh igual a: ", soma + num);
        FIMSE
		soma <- soma + num;
		
        conta <- conta + 1;
    }

    ESCREVA("Foram somados ",conta," valores");
    ESCREVA("Total da soma: ",soma);
FIMALGORITMO
*/

//Autor: Felipe Kadanos - 11/04/2025

#include <stdio.h>

int main() {
    int num=1,soma=0,conta=1;

    while (num != 0) {
        printf("\nDigite um numero: ");
        scanf("%d", &num);

        (soma != 0 && num != 0) ? printf("\nA soma de %d + %d eh igual a: %d \n", soma, num, soma + num), conta++: "";
		soma += num;
    }

    printf("\n\nForam somados %d valores", conta);
    printf("\nTotal da soma: %d", soma);
}
