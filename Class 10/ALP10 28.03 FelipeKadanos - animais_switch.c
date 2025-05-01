/* Ajuste o c�digo da atividade 3 para apresentar
ao respondente perguntas em blocos, tipo
menu e submenu, usando estrutura condicional
tipo ESCOLHA ... CASO (switch ... case).
� Exemplo:
[1] Mam�fero,
[2] Ave, ou
[3] R�ptil?
Escolha uma categoria: 1
[1] Quadr�pede,
[2] B�pede,
[3] Voador, ou
[4] Aqu�tico?
Escolha uma categoria: 2
[1] On�voro, ou
[2] Frut�fero?
Escolha uma categoria: 2
Animal escolhido: MICO LE�O! */

// Autor: Felipe Kadanos - 28/03/2025

#include <stdio.h>
#include <conio.h>

int main() {
    char resp;

    printf("[1] Mamifero\n");
    printf("[2] Ave\n");
    printf("[3] Reptil\n");
    printf("Escolha uma categoria: ");
    resp = getche();

    switch (resp) {
        case '1':
            printf("\nEh mamifero?\n");
            printf("[1] Quadrupede\n[2] Bipede\n[3] Voador\n[4] Aquatico\n");
            printf("Escolha uma categoria: ");
            resp = getche();
            
            switch (resp) {
                case '1':
                    printf("\n[1] Carnivoro\n[2] Herbivoro\n[3] Onivoro\n");
                    printf("Escolha uma categoria: ");
                    resp = getche();
                    
                    switch (resp) {
                        case '1': printf("\nONCA!\n"); break;
                        case '2': printf("\nBOI!\n"); break;
                        case '3': printf("\nPORCO!\n"); break;
                        default: printf("\nCategoria invalida!\n");
                    }
                    break;
                
                case '2':
                    printf("\n[1] Onivoro\n[2] Frutifero\n");
                    printf("Escolha uma categoria: ");
                    resp = getche();
                    
                    switch (resp) {
                        case '1': printf("\nHOMEM!\n"); break;
                        case '2': printf("\nMICO LEAO!\n"); break;
                        default: printf("\nCategoria invalida!\n");
                    }
                    break;
                
                case '3': printf("\nMORCEGO!\n"); break;
                case '4': printf("\nGOLFINHO!\n"); break;
                default: printf("\nCategoria invalida!\n");
            }
            break;

        case '2':
            printf("\nNao voador?\n");
            printf("[1] Tropical\n[2] Polar\n[3] Nadador\n[4] De rapina\n");
            printf("Escolha uma categoria: ");
            resp = getche();
            
            switch (resp) {
                case '1': printf("\nAVESTRUZ!\n"); break;
                case '2': printf("\nPINGUIM!\n"); break;
                case '3': printf("\nAVESTRUZ!\n"); break;
                case '4': printf("\nCONDOR!\n"); break;
                default: printf("\nCategoria invalida!\n");
            }
            break;

        case '3':
            printf("\nCom casco?\n");
            printf("[1] Sim\n[2] Nao\n");
            printf("Escolha uma categoria: ");
            resp = getche();
            
            switch (resp) {
                case '1': printf("\nJABUTI!\n"); break;
                case '2':
                    printf("\n[1] Carnivoro\n[2] Sem patas\n");
                    printf("Escolha uma categoria: ");
                    resp = getche();
                    
                    switch (resp) {
                        case '1': printf("\nJACARE!\n"); break;
                        case '2': printf("\nSUCURI!\n"); break;
                        default: printf("\nCategoria invalida!\n");
                    }
                    break;
                default: printf("\nCategoria invalida!\n");
            }
            break;

        default:
            printf("\nCategoria invalida!\n");
    }
    return 0;
}
