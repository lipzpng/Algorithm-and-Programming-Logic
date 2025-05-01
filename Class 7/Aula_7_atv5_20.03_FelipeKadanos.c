/* 3. Sabendo que latão é constituído de 70% cobre e 30% zinco:
• Solicitar o peso de latão que o usuário deseja;
• Informar o peso de cobre necessário;
• Informar o peso de zinco necessário. */

#include <stdio.h>
int main(){
	
	float latao;
	
	printf("Digite o peso em kg de latão que voce deseja: ");
	scanf("%f", &latao);

	printf("\nSerao necessarios %.2fkg de cobre e %.2fkg de zinco", (latao*0.70),(latao*0.30));

}
