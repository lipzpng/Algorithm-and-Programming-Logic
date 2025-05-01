/* • Escreva um programa que verifique a validade de uma senha formada por números inteiros
fornecida pelo usuário (a senha válida poderá ser o número 2025).
• Se a senha informada seja inválida, a mensagem "ACESSO NEGADO" deverá ser mostrada na
tela e uma nova senha deverá ser solicitada até que seja informada uma senha válida.
• Caso o número de erros consecutivos na senha seja maior que 5, deverá ser exibida a seguinte
mensagem:
“Quantidade máxima de 5 tentativas atingida!
AGUARDE 30 SEGUNDOS PARA NOVAS TENTATIVAS”.
Uma contagem regressiva deve ser iniciada para depois voltar a pedir a senha novamente.
• Caso a senha informada seja a correta, deve ser mostrado na tela a mensagem "ACESSO
PERMITIDO" junto com o número de tentativas para acesso. */

//Autor: Felipe Kadanos - 11/04/2025

#include <stdio.h>
#include <windows.h>

int main() {
    int senha, tentativa = 0;

    do {
        if (tentativa > 4){
            printf("\nQuantidade maxima de 5 tentativas atingida!\nAGUARDE 10 SEGUNDOS PARA NOVAS TENTATIVAS");
            
			int espera = 10;
			do {
                printf("\n%d", espera);
                espera--;
                Sleep(1000);
            } while (espera != 0);
        }

        (tentativa > 0 && tentativa < 5) ? printf("\nACESSO NEGADO") : "" ;

        printf("\nInforme a senha: ");
        scanf("%d", &senha);

        tentativa++;

    } while (senha != 2025);
    
    printf("\n\nACESSO PERMITIDO");
    printf("\nTentativas: %d", tentativa);
}
