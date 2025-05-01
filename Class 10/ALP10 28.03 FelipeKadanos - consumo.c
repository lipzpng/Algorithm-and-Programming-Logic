/* • Escreva um algoritmo em fluxograma que leia a distancia em Km e a quantidade de litros de
gasolina consumidos por um carro em um percurso, calcule o consumo em Km/l e apresente
uma mensagem de acordo com a tabela abaixo:
• Em seguida, transcreva para pseudocódigo Portugol.
• Depois, transcreva para a linguagem C. */

// Autor: Felipe Kadanos - 28/03/2025

/*  
ALGORITMO consumo_carro
VAR   
    REAL: distancia, litros, consumo;
INICIO
    ESCREVA("Digite a distancia percorrida: ");
    LEIA(distancia);

    ESCREVA("Digite quantidade de litros de gasolina consumidas: ");
    LEIA(litros);

    consumo <- distancia / litros;

    SE (consumo < 8) ENTAO
        ESCREVA("Venda o carro!");
    SENAO SE (consumo > 14) ENTAO
        ESCREVA("Economico!");
    SENAO
        ESCREVA("Super economico!");
    FIMSE
FIMALGORITMO
*/

#include <stdio.h>

int main() {

    float distancia, litros, consumo;

    printf("Digite a distancia percorrida: ");
    scanf("%f", &distancia);
    
    printf("Digite quantidade de litros de gasolina consumidas: ");
    scanf("%f", &litros);
    
    consumo = distancia / litros;

    if (consumo < 8) {
        printf("Venda o carro!");
    } else if (consumo > 14) {
        printf("Economico!");
    } else {
        printf("Super economico!");
    }

}
