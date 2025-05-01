/*Autor: Felipe Kadanos*/
#include <stdio.h>
int main(){
	
	int atv2,atv3,atv4;
	
	/* 1. Criar um programa em C que leia quatro notas de um aluno, calcule a m�dia aritm�tica
	dessas notas, e apresente o resultado na tela com precis�o de duas casas decimais. */
		
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
	
	printf("\n\n\nDigite 2 para prosseguir ");
	scanf("%i", &atv2);	
	
	if(atv2 == 2){
		
		/* 2. Criar um programa em C que leia o valor do raio, calcule a �rea da circunfer�ncia cuja f�rmula
		� PI * raio2, e apresente o resultado da �rea na tela. */
		
		printf("\n\nAtividade 2 ");
		
		float raio, area;
		
		printf("\nInforme o raio: ");
		scanf("%f", &raio);

		area = (3.1416 * (raio * raio));

		printf("\n�rea da circunfer�ncia: ", area);
	}    
	

	float vlr = 0;
	
	/* 1. Todo restaurante, embora por lei n�o possa obrigar o cliente a pagar, cobra 10% de comiss�o
	para o gar�om. Escreva um programa em C que leia o valor gasto pelo cliente em um
	restaurante, calcule e mostre o valor da gorjeta e o valor total a ser pago. */
	
	printf("\n\nAtividade 1 ");
	
	printf("\n\nDigite o valor do pedido: ");
	scanf("%f", &vlr);
	
	printf("\nO valor da gorjeta eh R$%.2f. O valor total do pedido eh R$%.2f", vlr * 0.10, (vlr * 0.10)+vlr);
	
	printf("\n\n\nDigite 2 para prosseguir ");
	scanf("%i", &atv2);	
	
	if(atv2 == 2){
		float valor = 0;
		int sapatos = 0;
		
		/* 2. Um vendedor de uma loja de sapatos recebe como pagamento salarial 20% de comiss�o sobre
		as vendas do m�s e R$ 5,00 por cada par de sapatos vendido. Escreva um programa em C
		que leia o valor total das vendas do m�s e o n�mero de sapatos vendidos, calcule e mostre
		qual ser� a comiss�o total, o valor total ganho por par de sapato vendido, e o sal�rio total do
		vendedor naquele m�s. */
		
		printf("\n\nAtividade 2 ");
		
		printf("\n\nDigite as vendas do vendedo: ");
		scanf("%f", &valor);
		printf("\nDigite o numero de pares de sapatos vendido pelo vendedo: ");
		scanf("%i", &sapatos);
		
		printf("\nA comissao do vendedor eh: %.2f", valor*0.20);
		printf("\nA comissao do vendedor eh: %i", 5*sapatos);
		printf("\nO salario total do vendedor eh: %.2f", (valor*0.20) + (5*sapatos));
	}                  
	
	printf("\n\n\nDigite 3 para prosseguir ");
	scanf("%i", &atv3);
	
	if(atv3 == 3){
		
		int brancos = 0;
		int nulos = 0; 
		int validos = 0; 
		int total = 0;
		
		/* 3. Escreva um programa em C que leia o n�mero de votos brancos, o n�mero de votos nulos e o
		n�mero de votos v�lidos em um munic�pio, calcule e escreva o percentual de votos brancos,
		nulos e v�lidos em rela��o ao total de votos no munic�pio. */
		
		printf("\n\nAtividade 3 ");

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
	
	printf("\n\n\n	Digite 4 para prosseguir ");
	scanf("%i", &atv4);
	
	if(atv4 == 4){
		float km = 0;
		int dias = 0;
		
		/* 1. Escreva um programa em C que pergunte ao usu�rio a quantidade de km percorridos por um
		carro alugado e a quantidade de dias pelos quais ele foi alugado, calcule e mostre o custo do
		carro, a taxa fixa, o seguro obrigat�rio, a margem de lucro, e o valor total a ser pago, onde
		esses valores s�o obtidos a partir das seguintes express�es:
		� custo do carro que � R$ 70,00 por dia e R$ 0,15 por km percorrido, +
		� taxa fixa de R$ 35, +
		� seguro obrigat�rio que � 50% do valor total a pagar por km percorrido, +
		� margem de lucro que � 25% do valor total a pagar pela quantidade de dias de aluguel */
		
		printf("\n\nAtividade semanal ");
	
		printf("\n\nDigite a quantidade de km percorrido: ");
		scanf("%f", &km);
		printf("\nDigite a quantidade de dias que o carro foi alugado: ");
		scanf("%i", &dias);
		
		printf("\nO custo do carro eh: R$ %.2f", (70*dias) + (0,15*km));
		printf("\nTaxa fixa de: R$ 35,00");
		printf("\nSeguro obrigatorio: R$ %.2f", (0,15*km)/2);
		printf("\nMargem de lucro: R$ %.2f", (70*dias)*0.25);
		printf("\nO total a pagar eh: R$ %.2f", ((70*dias + 0,15*km) + 35 +((0,15*km)/2)+(70*dias)*0.25));
	}
}

