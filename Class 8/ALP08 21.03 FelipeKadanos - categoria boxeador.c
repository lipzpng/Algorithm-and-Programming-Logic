/* • Escreva um programa que leia o peso de um boxeador e informe a categoria a qual o boxeador
pertence conforme a tabela a seguir: */

// Autor: Felipe Kadanos 21/03/2025

#include <stdio.h>

int main(){
	
	float peso;

    printf("Digite o peso do boxeador: ");
    scanf("%f", &peso);
    
    if(peso < 50){
        printf("\nO boxeador esta na categoria PALHA");
    } else if(peso < 60){
        printf("\nO boxeador esta na categoria PLUMA");
    } else if(peso < 76){
        printf("\nO boxeador esta na categoria LEVE");
    } else if(peso < 88){
        printf("\nO boxeador esta na categoria PESADO");
    } else {
    	printf("\nO boxeador esta na categoria SUPER PESADO");
	}
}
