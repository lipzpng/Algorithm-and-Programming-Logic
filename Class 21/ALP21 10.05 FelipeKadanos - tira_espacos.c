/* 6. Escreva um programa que leia uma frase de até 50 caracteres. Em seguida, escreva a frase sem
os espaços em branco. */

// Felipe Kadanos - 10/05/2025

#include <stdio.h>
#include <string.h>

int main(){
	
	char str[50];
	int i = 0, j = 0;

	printf("Digite uma string de 50 caracteres: ");
	fgets(str, sizeof(str), stdin);

    while (str[i]) {
        if (str[i] != ' ' && str[i] != '\n') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';

	printf("\nString sem espacos: '%s'", str);
	
	return 0;
}
