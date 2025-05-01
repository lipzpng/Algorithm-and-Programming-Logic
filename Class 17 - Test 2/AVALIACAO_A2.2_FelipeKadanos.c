/*  PROVA

1- Qual estrutura de repetição usa variavel de controle e quias são as funções dessa variavel?

A estrutura de repetição que usa variável de controle é o FOR/PARA. 
As funções da variavel de controle são:
    Controlar o número de repetições,
    Servir como contador,
    Pode ser usada dentro do laço de repetição,
    Indica a posição atual da repetição.

2- ***************************** Resposta no programa C abaixo *****************************

3- Pseudocodigo potugol:
	a)
        VAR
            CARACTER: sexo, tipo;
            // Contadores:
            INTEIRO: conta, homens, mulheres, tipo1, tipo2, tipo3;
            REAL: investimento, soma, media;
    
    b)
    	soma <- soma + investimento;
        media <- soma/conta;

    c)
        SE (sexo = 'M' <> sexo == '1') ENTAO
            homens <- homens + 1;
        FIMSE
        SE (sexo = 'F' <> sexo == '2') ENTAO
            mulheres <- mulheres + 1;
        FIMSE

    d)
        REPITA
            // Codigo...
        ENQUANTO (investimento > 0);
*/

//Autor: Felipe Kadanos - 25/04/2025

// Descrição: Sistema para gerenciamento de carteira de investimetos de clientes
#include <stdio.h>
int main(){
    char sexo, tipo;
    // Contadores:
    int conta = 0, homens = 0, mulheres = 0, tipo1 = 0, tipo2 = 0, tipo3 = 0;
    float investimento, soma, media;

    // Repetição que garante a alimentação de dados do sistema.
    do {
        printf("\nDigite M para Masculino e F para Feminino: ");
        scanf(" %c", &sexo);

        // Contador de clientes por sexo
        homens    += (sexo == 'M' || sexo == '1') ? 1 : 0;
        mulheres  += (sexo == 'F' || sexo == '2') ? 1 : 0;
        
        // Valida se sexo é diferente de (M, 1, F ou 2). Caso seja reinicia a repetição
        if (sexo != 'M' && sexo != '1' && sexo != 'F' && sexo != '2') {
            printf("Sexo de ser M ou 1 para Masculino ou F ou 2 para Feminino!\n");
            continue;
        }
        
        // Repetição que garante que tipo seja (1, 2 ou 3).
		do {
			printf("\nTipo da conta investimento: \n[1] para Poupanca \n[2] para CDB \n[3] para Fundos de Renda \nDigite a opcao desejada: ");
	        scanf(" %c", &tipo);
	
	        // Valida se tipo de conta é diferente de (1, 2 ou 3). Caso seja reinicia a repetição
	        if (tipo != '1' && tipo != '2' && tipo != '3') {
	            printf("Tipo da conta investimento deve ser 1, 2 ou 3!\n");
	        }
		} while (tipo != '1' && tipo != '2' && tipo != '3'); // Enquanto tipo for diferente de 1, 2 ou 3 faz a repeticao

        // Contadores de tipos de conta
        tipo1  += (tipo == '1') ? 1 : 0;
        tipo2  += (tipo == '2') ? 1 : 0;
        tipo3  += (tipo == '3') ? 1 : 0;
        
        printf("\nDigite o valor investido ou 0 para sair: ");
        scanf(" %f", &investimento);

        conta++; // total de clientes
        soma += investimento; // total de investimento

    } while(investimento > 0); // Enquanto investimento for maior que 0 faz a repeticao
    
    // Ignora entradas da ultima repetição
    conta--;
    homens   -= (sexo == 'M' || sexo == '1') ? 1 : 0;
	mulheres -= (sexo == 'F' || sexo == '2') ? 1 : 0;
	tipo1    -= (tipo == '1') ? 1 : 0;
    tipo2    -= (tipo == '2') ? 1 : 0;
    tipo3    -= (tipo == '3') ? 1 : 0;

	// Calcula media
    media = soma/conta;

	// Exibe Resultados
    printf("\n\n\nTotal de clientes lidos: %i", conta);

    printf("\n\nQuantidade de clientes homens: %i", homens);
    printf("\nQuantidade de clientes mulheres: %i", mulheres);

    printf("\n\nSoma dos valores investidos: R$ %.2f", soma);
    printf("\nMedia dos valores investidos R$ %.2f", media);

	// Mostra e calcula porcentagens
    printf("\n\nPocentagem dos investimentos realizados em cada tipo de conta: ");
    printf("\nPoupanca: %.2f %%", (((float)tipo1/conta)*100));
    printf("\nCDB: %.2f %%", (((float)tipo2/conta)*100));
    printf("\nFundos de Renda: %.2f %%", (((float)tipo3/conta)*100));

    printf("\n\nOs clientes dessa carteira de investimento pertencem ao grupo: ");
    if (media < 1500) { // Menor que 1500
        printf("\nGrupo de investimento BAIXO");
    } else if (media <= 5000) { // Entre 1500 e 5000
        printf("\nGrupo de investimento MEDIO");
    } else { //Maior que 5000
        printf("\nGrupo de investimento ALTO");
    }

    return 0;
}
