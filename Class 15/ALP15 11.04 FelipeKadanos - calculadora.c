/* • Escreva um programa que mostre ao usuário o seguinte menu
OPERAÇÕES MATEMÁTICAS
[1] ADIÇÃO
[2] SUBTRAÇÃO
[3] MULTIPLICAÇÃO
[4] DIVISÃO
[5] SAIR
Escolha a operação:
• Caso a escolha seja de 1 a 4, peça dois valores numéricos, realize o cálculo, mostre o resultado
na tela e retorne ao menu.
• Lembre-se que divisão por zero não é possível.
• Caso a escolha seja 5, avise o usuário que o programa será encerrado e encerre o programa.
• Caso a escolha não esteja no menu, informe o erro e retorne ao menu. */

//Autor: Felipe Kadanos - 11/04/2025

#include <stdio.h>
#include <conio.h>

int main() {
    char cod = '1';
    float num1,num2;

    while (cod != '5') {
        printf("\n\nOPERACOES MATEMATICAS\n[1] ADICAO\n[2] SUBTRACAO\n[3] MULTIPLICACAO\n[4] DIVISAO\n[5] SAIR\nEscolha a operacao: ");
        cod = getch();
        printf("%c\n", cod);
        if (cod == '5')
        	continue;

        printf("\nDigite o primeiro numero: ");
        scanf("%f", &num1);

        printf("\nDigite o segundo numero: ");
        scanf("%f", &num2);

        switch(cod){
            case '1':
                printf("\nA soma de %.2f + %.2f eh igual a: %.2f", num1, num2, num1 + num2);
            break;
            case '2':
                printf("\nA subtracao de %.2f - %.2f eh igual a: %.2f", num1, num2, num1 - num2);
            break;
            case '3':
                printf("\nA multiplicacao de %.2f x %.2f eh igual a: %.2f", num1, num2, num1 * num2);
            break;
            case '4':
                if (num2 == 0){
                    printf("\nNao eh possivel fazer divisao por zero");
                } else {
                    printf("\nA divisao de %.2f : %.2f eh igual a: %.2f", num1, num2, num1 / num2);
                }
            break;
        }
    }
}
