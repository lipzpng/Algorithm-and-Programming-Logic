/* 2. Escreva um programa que mostre o tamanho de uma string informada pelo usuário (utilize a
função e biblioteca apropriadas). */

// Felipe Kadanos - 10/05/2025

#include <stdio.h>
#include <string.h>

int main(){
	
	char str[255];
	
	printf("Digite sua string: ");
	scanf("%s", str);
	
	printf("\nTamanho da string: %d caracteres.", strlen(str));
	
	return 0;
}
