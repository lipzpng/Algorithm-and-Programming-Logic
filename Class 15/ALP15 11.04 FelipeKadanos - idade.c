/* 1. Escreva um programa que leia a idade de um grupo de pessoas até ler o valor 0 (zero), que
não deve ser considerado, calcule e apresente:
• a quantidade de idades lidas;
• a média das idades lidas;
• a quantidade de idades maiores de 18 anos;
• a maior idade lida; e
• a menor idade lida. */

//Autor: Felipe Kadanos - 11/04/2025

#include <stdio.h>

int main() {
    int idade=1,soma=0,conta=1,adulto=0,maiorIdade=0,menorIdade;

	printf("\nDigite a idade: ");
    scanf("%d", &idade);
    
    menorIdade = idade;

    while (idade != 0) {
        (idade >= maiorIdade) ? maiorIdade = idade : "";
        (idade <= menorIdade && idade!= 0) ? menorIdade = idade : "";

        (soma != 0) ? printf("\nA soma de %d + %d eh igual a: %d \n", soma, idade, soma + idade), conta++: "";
		soma += idade;
		
        (idade >= 18) ? adulto++ : "";
        
        printf("\nDigite a idade: ");
        scanf("%d", &idade);
    }

    printf("\n\nForam lidas %d idades", conta);
    printf("\nMedia das idades: %.2f", (float)soma/conta);
    printf("\nQuantidade de idades maiores que 18 anos: %d", adulto);
    printf("\nMaior idade: %d", maiorIdade);
    printf("\nMenor idade: %d", menorIdade);
}
