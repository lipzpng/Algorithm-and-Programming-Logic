/* AUTORES: Marcos Jos� Ferrari De Oliveira e Felipe Eduardo Kadanos
DATA: 03/04/2025

QUEST�O - 1 - Considerando  o recebimento de um pedido para a cria��o de um programa de computador, 
quais s�o as principais etapas que devem ser realizadas para se obter um programa execut�vel em arquivo?

1. An�lise de Requisitos - Compreender as necessidades e expectativas do cliente.
2. Planejamento do Projeto - Definir o escopo, o cronograma e os recursos necess�rios para o 
desenvolvimento.
3. Arquitetura do Sistema - Criar a arquitetura do software, planejar a estrutura do c�digo, design de 
banco de dados e interfaces de usu�rio. Escolher as tecnologias que ser�o utilizadas.
4. Desenvolvimento do Software - Programa��o das funcionalidades conforme planejamento, implementando o 
design e a estrutura definidos anteriormente. C�digo-fonte desenvolvido nas linguagens e tecnologias selecionadas.
5. Testes - Garantir que o programa funcione corretamente e atenda aos requisitos definidos. Realizar testes
por todo programa. Relat�rios de testes e corre��o de eventuais erros ou falhas.
6. Gera��o do Execut�vel - Transformar o c�digo-fonte em um arquivo execut�vel que possa ser rodado em uma m�quina.
7. Documenta��o do Sistema - Criar documenta��o que explique o funcionamento do programa, tanto para os usu�rios 
finais quanto para os desenvolvedores. Manuais de usu�rio, guias de instala��o, documenta��o do c�digo, notas de 
vers�o e outros documentos relevantes.
8. Implanta��o - Distribuir o execut�vel, instalar o sistema nos ambientes de produ��o, configurar servidores, e
oferecer treinamento aos usu�rios.
9. Manuten��o e Suporte - Corre��o de bugs, atualiza��es do sistema, adi��o de novas funcionalidades com base no
feedback dos usu�rios.

-------------------------------------------------------------------------------------------

QUEST�O - 2 - Crie um algoritmo em fluxograma que leia os seguintes dados sobre um trabalhador:
Idade (n�mero inteiro),
Sexo (1 para masculino e 2 para feminino), e
Tempo de servi�o (n�mero inteiro).

Depois escreva na tela se ele pode ou n�o se aposentar dependendo das condi��es para aposentadoria:

    Ter pelo menos 65 anos e ser do sexo masculino, ou
    Ter pelo menos 57 anos e ser do sexo feminino, ou
    Ter pelo menos 50 anos e ter trabalhado no m�nimo por 30 anos, ou
    Ter trabalhado pelo menos 40 anos.

-------------------------------------- EM ANEXO PNG --------------------------------------

-------------------------------------------------------------------------------------------

QUEST�O - 3 - Transcreva o algoritmo anterior pseudocodigo Portugol (como praticado em aula).

ALGORITMO verifica_aposentadoria
VAR
    INTEIRO: idade, sexo, temp_servico;
INICIO
    ESCREVA("Digite sua idade: ");
    LEIA(idade);
    ESCREVA("Digite 1 para Masculino e 2 para Feminino: ");
    LEIA(sexo);
    ESCREVA("Digite o tempo de servico: ");
    LEIA(temp_servico);
    
    SE (((idade >= 65) E (sexo = 1)) OU ((idade >= 57) E (sexo = 2)) OU ((idade >= 50) E (temp_servico >= 30)) OU (temp_servico >= 40)) ENTAO
        ESCREVA("Voce esta apto para se aposentar!");
    SENAO
        ESCREVA("Voce n�o esta apto para se aposentar");
    FIMSE
FIMALGORITMO

-------------------------------------------------------------------------------------------

QUEST�O - 4 - Transcreva o algoritmo anterior para a linguagem C.
Nesta etapa, acrescente a valida��o dos dados de entrada, como segue:

    Idade n�o pode ser menor que 0 (zero) nem maior que 120 (cento e vinte).
    Tempo de servi�o n�o pode ser menor que 0 (zero) nem maior que 90 (noventa).
    Sexo n�o pode ser diferente de 1 ou 2.

Caso os crit�rios de valida��o dos dados n�o sejam atendidos, informar o erro ao usu�rio e encerrar o programa.
   
   

*/

#include <stdio.h>

int main() {
	int idade, sexo, temp_servico;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	if ((idade < 0 ) || (idade > 120)) {
		printf("Aten��o a idade n�o pode ser: menor que 0  e nem maior que 120!");
		return 0;
	}
	
	printf("Digite 1 para masculino e 2 para feminino: ");
	scanf("%d", &sexo);
	if ((sexo != 1) && (sexo != 2)) {
		printf("Aten��o - Sexo nao pode ser diferente de 1 ou 2!");
		return 0;
	}
	
	printf("\nDigite o tempo de servi�o: ");
	scanf("%d", & temp_servico);
	if (temp_servico < 0 || temp_servico > 90){
		printf("Aten��o - tempo de servico n�o pode ser: menor que 0 e nem maior que 90! ");
		return 0;
	}
		
	
	if ((idade >= 65) && (sexo == 1) || ( idade >= 57) && ( sexo == 2) || ((idade >= 50) && (temp_servico >= 30)) || (temp_servico >= 40)) {
		printf("\nVoc� est� apto para se aposentar!");
	} else {
		printf("\nVoc� n�o est� apto para se aposentar!");
	}
	
	return 0;
}
