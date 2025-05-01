/* a) Escreva um algoritmo em Portugol que receba um n�mero inteiro e verifique se este n�mero �
par ou �mpar.
Em seguida, transcreva para a linguagem C e compile. */

/* 	
ALGORITMO
VAR
	INTEIRO: num;
INICIO
    ESCREVA("Digite um numero: ");
    LEIA(num);

    SE((num % 2) == 0) ENTAO
        ESCREVA("O numero ",num," eh par!");
    SENAO
        ESCREVA("O numero ",num," eh impar!");
    FIMSE
FIMALGORITMO */

// Autor: Felipe Kadanos 21/03/2025

#include <stdio.h>

int main(){
	
	int num;

    printf("Digite um numero: ");
    scanf("%i", &num);

    if((num % 2) == 0) {
        printf("O numero %i eh par!", num);
    } else {
        printf("O numero %i eh impar!", num);
    }
}
