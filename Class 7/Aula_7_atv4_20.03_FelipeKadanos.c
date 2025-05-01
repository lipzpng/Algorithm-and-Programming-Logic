/* 2. Calcular quanto um fumante gasta ao longo da vida com cigarro:
• Perguntar a quantidade de anos como fumante;
• Perguntar a quantidade de cigarros por dia;
• Perguntar o valor da carteira de cigarro;
• Considerar 20 cigarros por carteira;
• Informar o total de dinheiro gasto. */

#include <stdio.h>
int main(){
	
	int anos, cigasPorDia;
	float carteira;
	
	printf("Digite a quantidade de anos como fumante: ");
	scanf("%i", &anos);
	
	printf("Digite a quantidade de cigarros por dia: ");
	scanf("%i", &cigasPorDia);	
	
	printf("Digite o valor da carteira de cigarro: ");
	scanf("%f", &carteira);	

	printf("\nVoce gastou R$ %.2f com seu vicio", (((cigasPorDia*360)*(float)anos)/20)*carteira);

}
