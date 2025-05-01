/* • Escreva um programa que leia 2 notas de um aluno, calcule a sua média aritmética, e:
• Se a média for maior ou igual a 6, apresente a
mensagem "Aprovado";
• Se a média for menor que 4, apresente a mensagem
"Reprovado";
• Senão, apresente a mensagem "Em recuperação".
• Além dessa mensagem, apresentar o conceito atingido
pelo aluno de acordo com a tabela ao lado. */

// Autor: Felipe Kadanos 21/03/2025

#include <stdio.h>

int main(){
	
	float nt1,nt2;
	char conceito;

	printf("Digite a primeira nota: ");
    scanf("%f", &nt1);
	
	printf("Digite a segunda nota: ");
    scanf("%f", &nt2);
    
    float media = (nt1+nt2)/2;
    
    if(media >= 0 && media < 2){
    	conceito = 'E';
	} else if(media < 4){
    	conceito = 'D';
	} else if(media < 6){
    	conceito = 'C';
	} else if(media < 8){
    	conceito = 'B';
	} else {
		conceito = 'A';
	}
    
	if(media < 4){
		printf("\nReprovado com conceito: %c", conceito);
	} else if(media >= 6){
		printf("\nAprovado com conceito: %c", conceito);
	} else {
		printf("\nEm recuperacao com conceito: %c", conceito);
	}

}
