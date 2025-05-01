/* b) Tendo como dados de entrada a altura e o gênero de uma pessoa, escreva um programa em C
que calcule o peso ideal de uma pessoa de acordo com as seguintes fórmulas:
- Para homens: 72.7 x altura – 58
- Para mulheres: 62.1 x altura - 44.7 */

// Autor: Felipe Kadanos 21/03/2025

#include <stdio.h>

int main(){
	
	float alt;
	char gen;

    printf("Digite sua altura em metros: ");
    scanf("%f", &alt);
    
    printf("Digite seu gênero (M/F): ");
    scanf(" %c", &gen);

    if((gen == 'M') || (gen == 'm')){
        printf("\nSeu peso ideal eh: %.2f", 72.7 * alt - 58);
    } else if(gen == 'F' || gen == 'f'){
        printf("\nSeu peso ideal eh: %.2f", 62.1 * alt - 44.7);
    }
}
