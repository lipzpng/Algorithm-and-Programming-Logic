/* • Escreva um programa que leia o código de um determinado produto e mostre a suas
informações na tela.
• Utilize a tabela abaixo como referência:
• Acrescente dados para mais 3 produtos na tabela.
• Caso o código não exista, informe o usuário sobre o problema e encerre o programa.
• Use a estrutura ESCOLHA... CASO para o condicional. */

//Autor: Felipe Kadanos -  27/03/2025

#include <stdio.h>

int main() {
	
	int codigo;
	
	printf("Digite um codigo de produto: ");
	scanf("%i", &codigo);
	
	 switch(codigo) {
        case 100:
            printf("\nCod: %i, Produto: Detergente, Valor unitario: R$ 1,59", codigo);
            break;
        case 101:
            printf("\nCod: %i, Produto: Esponja, Valor unitario: R$ 4,59", codigo);
            break;
        case 103:
            printf("\nCod: %i, Produto: La de aco, Valor unitario: R$ 1,79", codigo);
            break;
        case 104:
            printf("\nCod: %i, Produto: Sabao, Valor unitario: R$ 5,36", codigo);
            break;
        case 105:
            printf("\nCod: %i, Produto: Desinfetante, Valor unitario: R$ 7,21", codigo);
            break;
        case 106:
            printf("\nCod: %i, Produto: Alcool, Valor unitario: R$ 2,87", codigo);
            break;
        default:
            printf("\nEste codigo nao existe!");
    }
	
}
