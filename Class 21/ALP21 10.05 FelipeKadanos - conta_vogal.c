/* 8. Escreva um programa para contar a quantidade de vogais em uma string. */

// Felipe Kadanos - 10/05/2025

#include <stdio.h>
#include <string.h>

int main(){
	
	char str[50], vogal;
	int i, conta = 0;

	printf("Digite uma string: ");
	scanf(" %20[^\n]", str);

    for (i=0;i<strlen(str);i++) {
        conta += (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') ? 1 : 0;
    }

	if (conta == 0){
		printf("\nEssa string nao tem vogais");
	} else {
		printf("\nExistem %d vogais na string", conta);	
	}
	
	return 0;
}
