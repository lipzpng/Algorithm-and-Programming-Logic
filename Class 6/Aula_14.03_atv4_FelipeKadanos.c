#include <stdio.h>
int main(){
	
	/* 2. Um vendedor de uma loja de sapatos recebe como pagamento salarial 20% de comissão sobre
	as vendas do mês e R$ 5,00 por cada par de sapatos vendido. Escreva um programa em C
	que leia o valor total das vendas do mês e o número de sapatos vendidos, calcule e mostre
	qual será a comissão total, o valor total ganho por par de sapato vendido, e o salário total do
	vendedor naquele mês. */
	
	float valor;
	int sapatos;
	
	printf("Atividade 2 ");
	
	printf("\nDigite as vendas do vendedo: ");
	scanf("%f", &valor);
	printf("\nDigite o numero de pares de sapatos vendido pelo vendedo: ");
	scanf("%i", &sapatos);
	
	printf("\nA comissao do vendedor eh: %.2f", valor*0.20);
	printf("\nA comissao do vendedor eh: %i", 5*sapatos);
	printf("\nO salario total do vendedor eh: %.2f", (valor*0.20) + (5*sapatos));
}
