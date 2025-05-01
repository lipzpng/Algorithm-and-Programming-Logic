/* • Escreva um programa que leia três valores A, B e C, e verifique se estes valores podem ser os
comprimentos dos lados de um triângulo e, se forem, verificar se estes compõem um triângulo
equilátero, isósceles ou escaleno.
• O programa também deve informar se não compuserem nenhum triângulo.
• Lembre-se ainda que:
• O comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos outros
dois lados;
• Chama-se de triângulo equilátero ao triângulo que tem os comprimentos dos três lados iguais;
• Chama-se de triângulo isósceles ao triângulo que tem os comprimentos de dois lados iguais. Portanto,
todo triângulo equilátero é também um triângulo isósceles;
• Chama-se de triângulo escaleno todo triângulo que tem os comprimentos de seus três lados
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
