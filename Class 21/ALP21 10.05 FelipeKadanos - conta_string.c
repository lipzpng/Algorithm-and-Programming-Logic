/* 3. Escreva um programa que mostre o tamanho de uma string informada pelo usuário (não utilize
funções de bibliotecas). */

// Felipe Kadanos - 10/05/2025

#include <stdio.h>
#include <string.h>

int main(){
	
	char str[255];
	int i, conta = 1;
	
	printf("Digite sua string: ");
	scanf("%s", str);

	for (i=0;str[i]!='\0';i++) {
		conta += (str[i]!='\0') ? 1 : 0 ;
	}
	
	printf("\nTamanho da string: %d caracteres.", conta);
	
	return 0;
}
