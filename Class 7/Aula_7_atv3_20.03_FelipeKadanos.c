/* 1. Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente
longa. Assumindo que seja possível medir sua sombra e a sombra do prédio no chão, e que
você lembre da sua altura, escreva um algoritmo para ler os dados necessários e calcular a
altura do prédio. */

#include <stdio.h>
int main(){
	
	float alt, altSombra, altSombraPredio;
	
	printf("Digite sua altura em cm: ");
	scanf("%f", &alt);
	
	printf("Digite a altura de sua sombra em cm: ");
	scanf("%f", &altSombra);	

	printf("Digite a altura da sombra do predio em cm: ");
	scanf("%f", &altSombraPredio);
	
	printf("\nO predio tem %.2fm de altura", ((alt * altSombraPredio)/altSombra)/100);

}
