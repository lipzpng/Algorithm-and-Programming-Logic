#include <stdio.h>
int main(){
	
	/* 1. Criar um programa em C que leia quatro notas de um aluno, calcule a média aritmética
	dessas notas, e apresente o resultado na tela com precisão de duas casas decimais. */
		
	float nota1, nota2, nota3, nota4, media;
	
	printf("Atividade 1 ");

	printf("\n\nDigite a nota 1: ");
	scanf("%f", &nota1);
	
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	
	printf("Digite a nota 3: ");
	scanf("%f", &nota3);
	
	printf("Digite a nota 4: ");
	scanf("%f", &nota4);
	
	media = ((nota1 + nota2 + nota3 + nota4)/4.0);
	
	printf ("\nA media aritmetica eh: %.1f", media);
	
}
