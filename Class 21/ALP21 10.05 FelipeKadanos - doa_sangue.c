/* 1. Um hospital local est� fazendo uma campanha para receber doa��o de sangue.
� O propenso doador deve inicialmente se cadastrar informando o seu primeiro nome, sua idade,
seu peso, e responder a um breve question�rio.
� Fa�a um programa que permita ao hospital avaliar a aptid�o de um volunt�rio quanto � doa��o
de sangue.
� Para estar apto a doar sangue, o volunt�rio deve ter idade entre 16 e 69 anos, pesar pelo
menos 50 kg, estar bem alimentado e n�o estar resfriado.
� O programa deve ler os dados e imprimir no final o nome do volunt�rio e se ele est� apto ou
n�o. */

// Felipe Kadanos - 10/05/2025

#include <stdio.h>
#include <string.h>

int main(){
	
	char nome[20], alimento, resfriado;
	int idade, peso;
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	
	printf("\nDigite sua idade: ");
	scanf("%d", &idade);
	
	printf("\nDigite seu peso: ");
	scanf("%d", &peso);
	
	printf("\nEsta bem alimentado? (S ou N): ");
	scanf(" %c", &alimento);
	
	printf("\nEsta resfriado? (S ou N): ");
	scanf(" %c", &resfriado);
	
	if ((idade > 15 && idade < 70) && peso >= 50 && alimento == 'S' && resfriado == 'N') {
		printf("\n\n%s voce esta apto para ser um doador de sangue!", nome);	
	} else if (idade < 16 || idade > 69) {
		printf("\n\n%s voce deve ter entre 16 e 69 anos!", nome);
	} else if (peso <= 50) {
		printf("\n\n%s voce deve ter pesar pelo menos 50kg!", nome);
	} else if (alimento == 'N') {
		printf("\n\n%s voce deve estar bem alimentado!", nome);
	} else if (resfriado == 'S') {
		printf("\n\n%s voce nao pode estar resfriado!", nome);
	}
	
	return 0;
}
