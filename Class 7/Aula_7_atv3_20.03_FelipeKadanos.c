/* 1. Num dia de sol, voc� deseja medir a altura de um pr�dio, por�m, a trena n�o � suficientemente
longa. Assumindo que seja poss�vel medir sua sombra e a sombra do pr�dio no ch�o, e que
voc� lembre da sua altura, escreva um algoritmo para ler os dados necess�rios e calcular a
altura do pr�dio. */

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
