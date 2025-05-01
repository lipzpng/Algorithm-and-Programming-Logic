/* 1. Uma fabrica de refrigerantes vende seu produto em três formatos: lata de 350 ml, garrafa de
600 ml e garrafa de 2 litros. Tomando por base que um comerciante compre uma determinada
quantidade de cada um dos formatos disponíveis, escreva um algoritmo para calcular quantos
litros de refrigerante ele comprou. */

#include <stdio.h>
int main(){

	int lata,garrafa600,garrafa2;

    printf("Digite a quantidade de latas que deseja comprar: ");
    scanf("%i", &lata);

    printf("Digite a quantidade de garrafa 600ml que deseja comprar: ");
    scanf("%i", &garrafa600);

    printf("Digite a quantidade de garrafa 2L que deseja comprar: ");
    scanf("%i", &garrafa2);

    lata = lata * 350;
    garrafa600 = garrafa600 * 600;
    garrafa2 = garrafa2 * 2000;

    printf("\n\nVoce esta comprando %.3fL", ((float)lata+garrafa600+garrafa2)/1000);
}
