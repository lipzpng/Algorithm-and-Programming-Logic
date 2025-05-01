/* 2. Escreva um algoritmo que solicite do usu�rio o valor de um saque em caixa eletr�nico, sendo
que estar�o dispon�veis c�dulas de 5, 10, 20, 50 e 100. O algoritmo deve apresentar a menor
quantidade de c�dulas poss�vel de acordo com o saque. Exemplos:
� Saque de 400,00: 4 c�dulas de 100.
� Saque de 350,00: 3 c�dulas de 100 e 1 c�dula de 50.
� Saque de 385,00: 3 c�dulas de 100, 1 c�dula de 50, 1 c�dula de 20, 1 c�dula de 10 e 1 c�dula de 5. */

#include <stdio.h>
int main(){
	
	int saque, cdl100, cdl50, cdl20, cdl10, cdl5;
	
	printf("Digite o valor que deseja sacar: ");
	scanf("%i", &saque);
	
    cdl100 = saque / 100;
    saque = saque % 100;

    cdl50 = saque / 50;
    saque = saque % 50;

    cdl20 = saque / 20;
    saque = saque % 20;

    cdl10 = saque / 10;
    saque = saque % 10;

    cdl5 = saque / 5;

	printf("Quantidade de c�dulas para o saque:\n");
    if (cdl100 > 0)
        printf("%d cedulas de 100\n", cdl100);
    if (cdl50 > 0)
        printf("%d cedulas de 50\n", cdl50);
    if (cdl20 > 0)
        printf("%d cedulas de 20\n", cdl20);
    if (cdl10 > 0)
        printf("%d cedulas de 10\n", cdl10);
    if (cdl5 > 0)
        printf("%d cedulas de 5\n", cdl5);
}
