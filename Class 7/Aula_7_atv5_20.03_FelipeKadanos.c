/* 3. Sabendo que lat�o � constitu�do de 70% cobre e 30% zinco:
� Solicitar o peso de lat�o que o usu�rio deseja;
� Informar o peso de cobre necess�rio;
� Informar o peso de zinco necess�rio. */

#include <stdio.h>
int main(){
	
	float latao;
	
	printf("Digite o peso em kg de lat�o que voce deseja: ");
	scanf("%f", &latao);

	printf("\nSerao necessarios %.2fkg de cobre e %.2fkg de zinco", (latao*0.70),(latao*0.30));

}
