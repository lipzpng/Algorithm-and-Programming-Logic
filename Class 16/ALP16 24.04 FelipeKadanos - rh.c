/* • Escreva um programa que apresente o menu de opções a seguir, que permita ao usuário escolher a opção desejada,
receba os dados necessários para executar a operação e mostre o resultado.
• Menu de opções:
• 1. Aumento no salário
• 2. Férias
• 3. Décimo terceiro
• 4. Sair
• Digite a opção desejada :
• Na opção 1, receber o salário de um funcionário, calcular e mostrar o novo salário usando as regras a seguir:
• Salários até R$ 500, aumento de 15%;
• Salários de R$ 500 a R$ 1000, aumento de 10%
• Salários acima de R$ 1000, aumento de 5%
• Na opção 2, receber o salário de um funcionário, calcular e mostrar o valor de suas férias. Sabe-se que as férias
equivalem ao seu salário acrescido de 25%.
• Na opção 3, receber o salário de um funcionário e o número de meses de trabalho na empresa, no máximo 12,
calcular e mostrar o valor do décimo terceiro. Sabe-se que o décimo terceiro equivale ao seu salário multiplicado
pelo número de meses de trabalho dividido por 12.
• Na opção 4: sair do programa. */

//Autor: Felipe Kadanos - 11/04/2025

#include <stdio.h>
#include <conio.h>

int main() {
	char cod = '0';
	int meses = 0;
    float salario;

    do {
    	switch(cod) {
    		case '1':
    			printf("\nDigite seu salario: ");
    			scanf("%f", &salario);
    			
    			if(salario <= 500) {
    				salario += salario * 0.15;
				} else if(salario <= 100) {
    				salario += salario * 0.10;
				} else {
    				salario += salario * 0.05;
				}
				printf("\nNovo salario: %.2f", salario);
    		break;
    		case '2':
    			printf("\nDigite seu salario: ");
    			scanf("%f", &salario);
    			
    			salario += salario * 0.25;
				
				printf("\nValor das ferias: %.2f", salario);
    		break;
    		case '3':
    			printf("\nDigite seu salario: ");
    			scanf("%f", &salario);
    			
    			do{
    				(meses > 12) ? printf("\nO numero de meses trabalhados nao opde ser maior que 12!") : "";
    				
    				printf("\nDigite o numero de meses trabalhados: ");
    				scanf("%i", &meses);
				} while (meses > 12);
    			
    			salario += (salario * meses)/12;
				
				printf("\nValor do decimo terceiro: %.2f", salario);
    		break;
		}
    	
        printf("\n\nMenu de opcoes:\n[1] Aumento no salario\n[2] Ferias\n[3] Decimo Terceiro\n[4] Sair\nDigite a opcao desejada: ");
        cod = getch();
        printf("%c\n", cod);
    } while (cod != 4);
    
    printf("\n\nSaindo do sistema de rh");
}
