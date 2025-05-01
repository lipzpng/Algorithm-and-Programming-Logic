/* • Considerando a tabela ao lado, faça um
programa que seja capaz de concluir qual dos
animais será escolhido, por intermédio de
perguntas e respostas.
• Animais possíveis: onça, boi, porco, homem,
mico leão, morcego, golfinho, avestruz,
pinguim, pato, condor, jabuti, jacaré e sucuri */

// Autor: Felipe Kadanos - 28/03/2025

#include <stdio.h>
#include <conio.h>

int main() {

    char resp;

    printf("Eh mamifero? ");
    resp = getche();

    if (resp == 'S'|| resp == 's') {
        printf("\nEh quadrupede? ");
        resp = getche();

        if (resp == 'S'|| resp == 's') {
            printf("\nEh carnivoro? ");
            resp = getche();

            if (resp == 'S'|| resp == 's') {
                printf("\nONCA!");
                return 0;
            }

            printf("\nEh herbivoro? ");
            resp = getche();

            if (resp == 'S'|| resp == 's') {
                printf("\nBOI!");
                return 0;
            }

            printf("\nEh onivoro? ");
            resp = getche();

            if (resp == 'S'|| resp == 's') {
                printf("\nPORCO!");
                return 0;
            }
        }

        printf("\nEh bipede? ");
        resp = getche();

        if (resp == 'S'|| resp == 's') {
            printf("\nEh onivero? ");
            resp = getche();

            if (resp == 'S'|| resp == 's') {
                printf("\nHOMEM!");
                return 0;
            }

            printf("\nEh frutifero? ");
            resp = getche();

            if (resp == 'S'|| resp == 's') {
                printf("\nMICO LEAO!");
                return 0;
            }
        }

        printf("\nEh voador? ");
        resp = getche();

        if (resp == 'S'|| resp == 's') {
            printf("\nMORCEGO!");
            return 0;
        }

        printf("\nEh aquatico? ");
        resp = getche();

        if (resp == 'S'|| resp == 's') {
            printf("\nGOLFINHO!");
            return 0;
        }
    }

    printf("\nEh ave? ");
    resp = getche();
    
    if (resp == 'S'|| resp == 's') {
        printf("\nNao voador? ");
        resp = getche();

        if (resp == 'S'|| resp == 's') {
            printf("\nEh tropical? ");
            resp = getche();

            if (resp == 'S'|| resp == 's') {
                printf("\nAVESTRUZ!");
                return 0;
            }

            printf("\nEh polar? ");
            resp = getche();

            if (resp == 'S'|| resp == 's') {
                printf("\nPINGUIM!");
                return 0;
            }
        }

        printf("\nEh nadador? ");
        resp = getche();

        if (resp == 'S'|| resp == 's') {
            printf("\nAVESTRUZ!");
            return 0;
        }

        printf("\nEh de rapina? ");
        resp = getche();

        if (resp == 'S'|| resp == 's') {
            printf("\nCONDOR!");
            return 0;
        }
    }

    printf("\nEh reptiu? ");
    resp = getche();
    
    if (resp == 'S'|| resp == 's') {
        printf("\nCom casco? ");
        resp = getche();

        if (resp == 'S'|| resp == 's') {
            printf("\nJABUTI!");
            return 0;
        }

        printf("\nEh carnivoro? ");
        resp = getche();

        if (resp == 'S'|| resp == 's') {
            printf("\nJACARE!");
            return 0;
        }

        printf("\nEh sem patas? ");
        resp = getche();

        if (resp == 'S'|| resp == 's') {
            printf("\nSUCURI!");
            return 0;
        }
    }
}
