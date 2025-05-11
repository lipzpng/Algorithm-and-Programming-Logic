/* 5. Escreva um programa que inicialize uma string com o texto "Hello, World!" e a apresente invertida. */

// Felipe Kadanos - 10/05/2025

#include <stdio.h>
#include <string.h>

int main(){
	
	char str[13] = "Hello, World!";
	int i;

	printf("%s\n",str);

	for(i=12; i>=0; i--) {
		printf("%c", str[i]);
	}
	
	return 0;
}
