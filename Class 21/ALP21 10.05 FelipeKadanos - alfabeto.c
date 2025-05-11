/* 4. Escreva um programa para exibir os caracteres de A a Z. */

// Felipe Kadanos - 10/05/2025

#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(){
	
	int i;

	printf("Alfabeto: \n");

	for(i=65; i<=90; i++) {
		printf("\n%c", i);
		Sleep(200);
	}
	
	return 0;
}
