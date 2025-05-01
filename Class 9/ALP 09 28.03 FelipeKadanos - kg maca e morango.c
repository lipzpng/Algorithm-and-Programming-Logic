/* • Uma frutaria está vendendo frutas com a seguinte tabela de preços:
• Se o cliente comprar mais de 10 kg em frutas ou se o valor total da compra ultrapassar R$ 50,00,
receberá ainda um desconto de 10% sobre este total.
• Escreva um programa que leia a quantidade (em kg) de morangos e a quantidade (em kg) de
maças adquiridas pelo cliente, e informe o valor da compra sem desconto, o valor do desconto e
o valor a ser pago pelo cliente  */

//Autor: Felipe Kadanos -  27/03/2025

#include <stdio.h>

int main() {
	
	float morango, vlrMorango, totalMorango, descontoMorango, maca, vlrMaca, totalMaca, descontoMaca;

    printf("Digite a quantidade em kg de morango: ");
    scanf("%f", &morango);

    printf("Digite a quantidade em kg de maca: ");
    scanf("%f", &maca);

   	if (morango > 5) {
	    vlrMorango = morango * 5.50;
	} else {
	    vlrMorango = morango * 6.50;
	}
	
	if ((morango > 10.00) || (vlrMorango > 50.00)) {
	    descontoMorango = vlrMorango * 0.10;
	}
	totalMorango = vlrMorango - descontoMorango;
	
	if (maca > 5) {
	    vlrMaca = maca * 2.80;
	} else {
	    vlrMaca = maca * 3.80;
	}
	
	if ((maca > 10.00) || (vlrMaca > 50.00)) {
	    descontoMaca = vlrMaca * 0.10;
	}
	totalMaca = vlrMaca - descontoMaca;
	
	printf("\n\nValor da compra de morangos sem desconto: R$ %.2f", vlrMorango);
	printf("\nValor do desconto dos morangos: %.2f%%", descontoMorango);
	printf("\nValor a pagar dos morangos: R$ %.2f", totalMorango);
	
	printf("\n\nValor da compra das macas sem desconto: R$ %.2f", vlrMaca);
	printf("\nValor do desconto das macas: %.2f%%", descontoMaca);
	printf("\nValor a pagar das macas: R$ %.2f", totalMaca);
	
	printf("\n\nValor da compra sem desconto: R$ %.2f", vlrMorango + vlrMaca);
	printf("\nValor do desconto total: %.2f%%", descontoMorango + descontoMaca);
	printf("\nValor a pagar: R$ %.2f", totalMorango + totalMaca);
}
