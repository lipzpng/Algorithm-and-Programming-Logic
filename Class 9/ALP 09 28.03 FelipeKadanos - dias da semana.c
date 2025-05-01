/* • Escreva um algoritmo um pseudocódigo que leia um inteiro entre 1 e 7 e imprima o dia da
semana correspondente a este numero, ou seja, “domingo” se 1, “segunda-feira” se 2, e assim
por diante.
• Apresente a mensagem “Número inválido!” caso o número digitado não seja inteiro entre 1 e 7.
• Use a estrutura ESCOLHA... CASO para o condicional.
• Em seguida, transcreva para a linguagem C */

/* 
ALGORITMO dias_semana
VAR
	INTEIRO: num
INICIO
	ESCREVA("Digite um numerio de 1 a 7: ");
	LEIA(num);
	
	ESCOLHA(num)
        CASO 1: ESCREVA("Domingo");
        CASO 2: ESCREVA("Segunda-feira");
        CASO 3: ESCREVA("Terça-feira");
        CASO 4: ESCREVA("Quarta-feira");
        CASO 5: ESCREVA("Quinta-feira");
        CASO 6: ESCREVA("Sexta-feira");
        CASO 7: ESCREVA("Sábado");
        CASO_CONTRARIO: ESCREVA("Número inválido!");
    FIM_ESCOLHA
FIMALGORITMO
*/

//Autor: Felipe Kadanos -  27/03/2025

#include <stdio.h>

int main() {
	
	int num;
	
	printf("Digite um numerio de 1 a 7: ");
	scanf("%i", &num);
	
	 switch(num) {
        case 1:
            printf("\nDomingo");
            break;
        case 2:
            printf("\nSegunda-feira");
            break;
        case 3:
            printf("\nTerça-feira");
            break;
        case 4:
            printf("\nQuarta-feira");
            break;
        case 5:
            printf("\nQuinta-feira");
            break;
        case 6:
            printf("\nSexta-feira");
            break;
        case 7:
            printf("\nSábado");
            break;
        default:
            printf("\nNúmero inválido!");
    }
	
}
