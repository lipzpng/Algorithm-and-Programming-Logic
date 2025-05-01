/* � Escreva um programa que apresente o menu de op��es a seguir, que permita ao usu�rio escolher a op��o desejada,
receba os dados necess�rios para executar a opera��o e mostre o resultado.
� Menu de op��es:
� 1. Aumento no sal�rio
� 2. F�rias
� 3. D�cimo terceiro
� 4. Sair
� Digite a op��o desejada :
� Na op��o 1, receber o sal�rio de um funcion�rio, calcular e mostrar o novo sal�rio usando as regras a seguir:
� Sal�rios at� R$ 500, aumento de 15%;
� Sal�rios de R$ 500 a R$ 1000, aumento de 10%
� Sal�rios acima de R$ 1000, aumento de 5%
� Na op��o 2, receber o sal�rio de um funcion�rio, calcular e mostrar o valor de suas f�rias. Sabe-se que as f�rias
equivalem ao seu sal�rio acrescido de 25%.
� Na op��o 3, receber o sal�rio de um funcion�rio e o n�mero de meses de trabalho na empresa, no m�ximo 12,
calcular e mostrar o valor do d�cimo terceiro. Sabe-se que o d�cimo terceiro equivale ao seu sal�rio multiplicado
pelo n�mero de meses de trabalho dividido por 12.
� Na op��o 4: sair do programa. */

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
