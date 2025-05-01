#include <stdio.h>
int main(){
	
	/* 1. Todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra 10% de comissão
	para o garçom. Escreva um programa em C que leia o valor gasto pelo cliente em um
	restaurante, calcule e mostre o valor da gorjeta e o valor total a ser pago. */
	
	float vlr;
	
	printf("Atividade 1 ");
	
	printf("\nDigite o valor do pedido: ");
	scanf("%f", &vlr);
	
	printf("\nO valor da gorjeta eh R$%.2f. O valor total do pedido eh R$%.2f", vlr * 0.10, (vlr * 0.10)+vlr);

}
