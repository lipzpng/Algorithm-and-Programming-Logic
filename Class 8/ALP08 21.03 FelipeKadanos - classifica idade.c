/* c) Escreva um programa em C que leia a idade de uma pessoa e determine sua classificação
como menor de idade (menos de 18 anos), maior de idade ou terceira idade (idade igual ou
superior a 65 anos). */

// Autor: Felipe Kadanos 21/03/2025

#include <stdio.h>

int main(){
	
	int idade;

    printf("Digite sua idade: ");
    scanf("%i", &idade);
    
    if(idade < 18){
        printf("\nVoce eh menor de idade");
    } else if(idade >= 65){
        printf("\nVoce esta na terceira idade");
    } else {
        printf("\nVoce eh maior de idade");
    } 
}
