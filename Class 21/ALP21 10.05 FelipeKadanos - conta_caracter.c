/* 7. Escreva um programa que receba uma string e um caractere, e retorne o número de vezes que
esse caractere aparece na string. */

// Felipe Kadanos - 10/05/2025

#include <stdio.h>
#include <string.h>

int main(){
	
	char str[50], caracter;
	int i, conta = 0;

	printf("Digite uma string: ");
	scanf(" %20[^\n]", str);

    printf("Digite um char: ");
	scanf(" %c", &caracter);

    for (i=0;i<strlen(str);i++) {
        conta += (str[i] == caracter) ? 1 : 0;
    }

	if (conta == 0){
		printf("\nEsse caracter nao aparece na string");
	} else {
		printf("\nEsse caracter aparece %d vezes na string", conta);	
	}
	
	return 0;
}
