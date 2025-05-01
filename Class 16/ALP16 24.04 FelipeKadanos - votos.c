/* 1. Escreva um programa que simule a urna eletrônica.
A tela a ser apresentada deverá ser da seguinte forma:
As opções são:
[1] Candidato Nelson Rodrigues
[2] Candidato Carlos Luz
[3] Candidato Neves Rocha
[4] Nulo
[5] Branco
Entre com o seu voto:
O programa deverá ler os votos dos eleitores e, quando for informado o número 0, apresentar
as seguintes informações:
a) O número de votos de cada candidato;
b) A porcentagem de votos nulos;
c) A porcentagem de votos brancos;
d) O candidato vencedor. */

//Autor: Felipe Kadanos - 11/04/2025

#include <stdio.h>
#include <conio.h>

int main() {
    char cod = '1';
    int nelson = 0, carlos = 0, neves = 0, nulo = 0, branco = 0;

    do {
        printf("\nCANDIDATOS:\n[1] Candidato Nelson Rodrigues\n[2] Candidato Carlos Luz\n[3] Candidato Neves Rocha\n[4] Nulo\n[5] Branco\nEntre com o seu voto: ");
        cod = getch();
        printf("%c\n", cod);

        nelson  += (cod == '1') ? 1 : 0;
        carlos  += (cod == '2') ? 1 : 0;
        neves   += (cod == '3') ? 1 : 0;
        nulo    += (cod == '4') ? 1 : 0;
        branco  += (cod == '5') ? 1 : 0;

    } while (cod != '0');
    
    printf("\n\nNumero de votos de cada candidato:");

    printf("\nNelson Rodrigues: %d", nelson);
    printf("\nCarlos Luz: %d", carlos);
    printf("\nNeves Rocha: %d", neves);

    int total = nelson + carlos + neves + nulo + branco;
    
    printf("\n\nPorcentagem de votos nulos: %.2f", (((float)nulo/total)*100));
    printf("\nPorcentagem de votos brancos: %.2f", (((float)branco/total)*100));

    if (nelson > carlos && nelson > neves) {
        printf("\n\nCandidato vendedor: Nelson Rodrigues");

    } else if (carlos > nelson && carlos > neves) {
        printf("\n\nCandidato vendedor: Carlos Luz");

    } else if (neves > nelson && neves > carlos) {
        printf("\n\nCandidato vendedor: Neves Rocha");

    } else {
        printf("\n\nHouve empate!");

    }
}
