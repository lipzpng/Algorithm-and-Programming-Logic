/* a) Escreva um programa que leia um digito do teclado e informe se foi digitado uma vogal ou
outro caractere (considerar apenas letras minúsculas).
Decida por usar a estrutura SE... ENTÃO... SENÃO ou ESCOLHA... CASO para o condicional.
b) Ajuste o programa anterior para também informar se foi digitado um número.
c) Ajuste o programa anterior para também informar se foi digitado uma consoante.
d) Ajuste o programa anterior para também informar se foi digitado um caractere em maiúsculo ou
minúsculo.
Obs: considere fazer uso da tabela ASCII para
checar os caracteres digitados.
Use o intervalo de valores decimais da tabela.
Considere utilizar a função “getche()” da biblioteca
“conio.h” para ler um caractere do teclado. */

//Autor: Felipe Kadanos -  27/03/2025

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main() {

    printf("Digite um caractere: ");
    char c = getche(); 

    if (c >= '0' && c <= '9') {
        printf("\n\nNumero");
        return 0;
    } else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        printf("\n\nVogal");
    } else {
        printf("\n\nConsoante");
    }

    if (isupper(c)) {
        printf("\n\nMaiusculo");
    } else {
        printf("\n\nMinusculo");
    }

}
