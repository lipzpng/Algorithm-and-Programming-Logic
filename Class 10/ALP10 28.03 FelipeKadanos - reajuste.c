/* • Escreva um algoritmo em fluxograma que leia a distancia em Km e a quantidade de litros de
gasolina consumidos por um carro em um percurso, calcule o consumo em Km/l e apresente
uma mensagem de acordo com a tabela abaixo:
• Em seguida, transcreva para pseudocódigo Portugol.
• Depois, transcreva para a linguagem C. */

// Autor: Felipe Kadanos - 28/03/2025

/*  
ALGORITMO calculo_bonus_salario
VAR
    REAL: salarioAtual, tempo, bonus, reajuste
INICIO
    ESCREVA("Digite o salario atual: ");
    LEIA(salarioAtual);

    ESCREVA("Digite o tempo de servico: ");
    LEIA(tempo);

    SE (salarioAtual <= 500.00) Então
        reajuste <- salarioAtual + (salarioAtual * 0.25);
    SENAO SE (salarioAtual <= 1000.00) Então
            reajuste <- salarioAtual + (salarioAtual * 0.20);
        SENAO SE (salarioAtual <= 1500.00) Então
                reajuste <- salarioAtual + (salarioAtual * 0.15);
            SENAO SE (salarioAtual <= 2000.00) Então
                    reajuste <- salarioAtual + (salarioAtual * 0.10);
                FIMSE
            FIMSE
        FIMSE
    FIMSE

    SE (tempo >= 1 E tempo <= 3) ENTAO
        bonus <- 100;
    SENAO
        SE (tempo <= 6) ENTAO
            bonus <- 200;
        SENAO
            SE (tempo <= 10) ENTAO
                bonus <- 300;
            SENAO
                bonus <- 500;
            FIMSE
        FIMSE
    FIMSE

    ESCREVA("Valor do reajuste: R$ ", reajuste);
    ESCREVA("Valor do bonus: R$ ", bonus);
    ESCREVA("Valor do novo salario: R$ ", reajuste + bonus);
FIMALGORITMO
*/

#include <stdio.h>

int main() {

    float salarioAtual, tempo, bonus, reajuste;

    printf("Digite o salario atual: ");
    scanf("%f", &salarioAtual);
    
    printf("Digite o tempo de servico: ");
    scanf("%f", &tempo);
    

    if (salarioAtual <= 500.00) {
        reajuste = salarioAtual + (salarioAtual*0.25); 
    } else if (salarioAtual <= 1000.00) {
        reajuste = salarioAtual + (salarioAtual*0.20); 
    } else if (salarioAtual <= 1500.00) {
        reajuste = salarioAtual + (salarioAtual*0.15); 
    } else if (salarioAtual <= 2000.00) {
        reajuste = salarioAtual + (salarioAtual*0.10); 
    }

    if (tempo >= 1 && tempo <= 3) {
        bonus = 100; 
    } else if (tempo <= 6) {
        bonus = 200; 
    } else if (tempo <= 10) {
        bonus = 300; 
    } else {
        bonus = 500; 
    } 

    printf("\nValor do reajuste: R$ %.2f", reajuste);
    printf("\nValor do bonus: R$ %.2f", bonus);
    printf("\nValor do novo salario: R$ %.2f", reajuste+bonus);

}
