/* 2. Escreva um algoritmo em pseudocódigo que mostre na tela uma contagem regressiva de 10
até 0 para o lançamento de um foguete.
Após o término da contagem regressiva, deve ser apresentada a palavra "Fogo!".
Em seguida, transcreva para a linguagem C. */

/* 
ALGORITMO foguete
VAR
    INTEIRO: i
INICIO
    PARA (i ? 10; i >= 0; i ? i - 1) FAÇA
        ESCREVA(i);
    FIMPARA
    ESCREVA("FOGO!");
FIMALGORITMO
*/

//Autor: Felipe Kadanos - 10/04/2025

#include <stdio.h>
#include <windows.h>

int main() {
    int i;
    
    for (i=10;i>=0;i--) {
        printf("%d \n", i);
        Sleep(1000);
    }
    Sleep(500);
    printf("\nFOGO!");
}
