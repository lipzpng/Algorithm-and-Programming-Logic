#include <stdio.h>
int main(){
	/* 2. Criar um programa em C que leia o valor do raio, calcule a área da circunferência cuja fórmula
	é PI * raio2, e apresente o resultado da área na tela. */
	
	float raio, area;
	
	printf("Atividade 2 ");
	
	printf("\n\nInforme o raio: ");
	scanf("%f", &raio);

	area = (3.1416 * (raio * raio));

	printf("\nArea da circunferencia: %.2f", area);
}
