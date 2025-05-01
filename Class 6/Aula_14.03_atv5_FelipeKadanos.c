#include <stdio.h>
int main(){

	/* 3. Escreva um programa em C que leia o número de votos brancos, o número de votos nulos e o
	número de votos válidos em um município, calcule e escreva o percentual de votos brancos,
	nulos e válidos em relação ao total de votos no município. */
	
	int brancos, nulos, validos, total;
	
	printf("\nAtividade 3 ");

	printf("\n\nDigite os votos brancos: ");
	scanf("%i", &brancos);
	printf("\nDigite os votos nulos: ");
	scanf("%i", &nulos);
	printf("\nDigite os votos validos: ");
	scanf("%i", &validos);
	
	total = brancos + nulos + validos;
	
	float percentB = (brancos / (float)total) * 100;
	float percentN = (nulos / (float)total) * 100;
	float percentV = (validos / (float)total) * 100; 
	
	printf("\nO percentual de votos brancos eh: %.2f%%, de nulos: %.2f%%, e validos: %.2f%% . Percentual total: %.2f%%. Total de votos no municipio: %i",
		percentB,
		percentN,
		percentV,
		percentB+percentN+percentV, 
		total
	);
}
