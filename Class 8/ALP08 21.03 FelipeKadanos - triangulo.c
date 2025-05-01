/* � Escreva um programa que leia tr�s valores A, B e C, e verifique se estes valores podem ser os
comprimentos dos lados de um tri�ngulo e, se forem, verificar se estes comp�em um tri�ngulo
equil�tero, is�sceles ou escaleno.
� O programa tamb�m deve informar se n�o compuserem nenhum tri�ngulo.
� Lembre-se ainda que:
� O comprimento de cada lado de um tri�ngulo � menor do que a soma dos comprimentos dos outros
dois lados;
� Chama-se de tri�ngulo equil�tero ao tri�ngulo que tem os comprimentos dos tr�s lados iguais;
� Chama-se de tri�ngulo is�sceles ao tri�ngulo que tem os comprimentos de dois lados iguais. Portanto,
todo tri�ngulo equil�tero � tamb�m um tri�ngulo is�sceles;
� Chama-se de tri�ngulo escaleno todo tri�ngulo que tem os comprimentos de seus tr�s lados
diferentes. */

// Autor: Felipe Kadanos 21/03/2025

#include <stdio.h>

int main(){
	
	int vlr1,vlr2,vlr3;

	printf("Digite o primeiro valor: ");
    scanf("%i", &vlr1);
	
	printf("Digite o segundo valor: ");
    scanf("%i", &vlr2);
    
	printf("Digite o terceiro valor: ");
    scanf("%i", &vlr3);
    
	if( vlr1 > (vlr2+vlr3) || vlr2 > (vlr1+vlr3) || vlr3 > (vlr1+vlr2)){
		printf("\nCada valor deve ser menor do que a soma outros dois");
		return 0;
	}

	if(vlr1 == vlr2 && vlr1 == vlr3){
		printf("\nEste eh um triangulo equilatero");
	} else if(vlr1 == vlr2 || vlr1 == vlr3){
		printf("\nEste eh um triangulo isoceles");
	} else if(vlr1 != vlr2 || vlr1 != vlr3 || vlr2 != vlr3){
		printf("\nEste eh um triangulo isoceles");
	}
}
