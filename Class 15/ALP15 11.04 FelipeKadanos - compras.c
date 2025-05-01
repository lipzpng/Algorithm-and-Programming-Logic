/* 1. Uma loja utiliza o código V para compras a vista e o código P para compras a prazo. Faça um
programa que receba o código e o valor das transações até receber o código X ou o valor 0.
Calcule e mostre:
• O valor total das compras à vista;
• O valor total das compras a prazo;
• O valor total das compras. */

//Autor: Felipe Kadanos - 11/04/2025

#include <stdio.h>
#include <conio.h>

int main() {
    char cod = 'A';
    float valor1=1,valor2=1,totalAvista,totalAprazo;

    while (cod != 'X' && cod != 'x' && valor1 != 0 && valor2 != 0) {
        printf("\nDigite o codigo da transacao (Deve ser V, P ou X): ");
        cod = getch();
        printf("%c\n", cod);
        if (cod != 'V' && cod != 'P' && cod != 'v' && cod != 'p')
        	continue;

        printf("\nDigite o primeiro valor: ");
        scanf("%f", &valor1);
        if (valor1 == 0)
			continue;

        printf("\nDigite o segundo valor: ");
        scanf("%f", &valor2);

        totalAvista = valor1 + valor2 + totalAvista;
        totalAprazo = (valor1 + valor2 + totalAprazo) + ((valor1 + valor2 + totalAprazo)*0.03);
        
        if (valor2 == 0)
			continue;
    }

    printf("\n\nTotal de compras a vista: R$ %.2f", totalAvista);
    printf("\nTotal de compras a prazo: R$ %.2f", totalAprazo);
    printf("\nTotal de compras: R$ %.2f", totalAvista + totalAprazo);
}
