#include <stdio.h>
int main(){
		
	/* 1. Escreva um programa em C que pergunte ao usuário a quantidade de km percorridos por um
	carro alugado e a quantidade de dias pelos quais ele foi alugado, calcule e mostre o custo do
	carro, a taxa fixa, o seguro obrigatório, a margem de lucro, e o valor total a ser pago, onde
	esses valores são obtidos a partir das seguintes expressões:
	• custo do carro que é R$ 70,00 por dia e R$ 0,15 por km percorrido, +
	• taxa fixa de R$ 35, +
	• seguro obrigatório que é 50% do valor total a pagar por km percorrido, +
	• margem de lucro que é 25% do valor total a pagar pela quantidade de dias de aluguel */
	
	float km;
	int dias;
	
	printf("\nAtividade 1 ");

	printf("\n\nDigite a quantidade de km percorrido: ");
	scanf("%f", &km);
	printf("\nDigite a quantidade de dias que o carro foi alugado: ");
	scanf("%i", &dias);
	
	printf("\nO custo do carro eh: R$ %.2f", (70*dias) + (0.15*km));
	printf("\nTaxa fixa de: R$ 35,00");
	printf("\nSeguro obrigatorio: R$ %.2f", (0.15*km)/2);
	printf("\nMargem de lucro: R$ %.2f", (70*dias)*0.25);
	printf("\nO total a pagar eh: R$ %.2f", ((70*dias + 0.15*km) + 35 +((0.15*km)/2)+(70*dias)*0.25));
}
