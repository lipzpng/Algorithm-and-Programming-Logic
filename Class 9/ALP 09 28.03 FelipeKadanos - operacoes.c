/* • Escreva um programa que mostre ao usuário um menu com 4 opções de operações
matemáticas, as mais básicas, peça dois valores numéricos, realize o cálculo, e mostre o
resultado na tela.
• Use a estrutura ESCOLHA... CASO para o condicional.
• Lembre-se que divisão por zero não é possível.  */

//Autor: Felipe Kadanos -  27/03/2025

#include <stdio.h>
#include <conio.h>

int main() {
	
	int num1, num2;

    printf("Digite a operacao que deseja realizar (+, -, *, /): ");
    char operacao = getche();

    printf("\nDigite o primeiro numero: ");
    scanf("%i", &num1);

    printf("Digite o segundo numero: ");
    scanf("%i", &num2);

    switch(operacao) {
        case '+':
            printf("\nA soma dos dois numeros eh: %i", num1 + num2);
            break;
        case '-':
            printf("\nA subtracao dos dois numeros eh: %i", num1 - num2);
            break;
        case '*':
            printf("\nA multiplicacao dos dois numeros eh: %i", num1 * num2);
            break;
        case '/':
            if(num2 == 0) {
                printf("\nNao eh possivel fazer divisao por zero!");
				return 0;
			}

            printf("\nA divisao dos dois numeros eh: %i", num1 / num2);
            break;
        default:
            printf("\nAs operacoes devem ser: +, -, *, /");
    }
}
