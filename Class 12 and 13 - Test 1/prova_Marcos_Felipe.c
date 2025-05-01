/* AUTORES: Marcos José Ferrari De Oliveira e Felipe Eduardo Kadanos
DATA: 03/04/2025

QUESTÃO - 1 - Considerando  o recebimento de um pedido para a criação de um programa de computador, 
quais são as principais etapas que devem ser realizadas para se obter um programa executável em arquivo?

1. Análise de Requisitos - Compreender as necessidades e expectativas do cliente.
2. Planejamento do Projeto - Definir o escopo, o cronograma e os recursos necessários para o 
desenvolvimento.
3. Arquitetura do Sistema - Criar a arquitetura do software, planejar a estrutura do código, design de 
banco de dados e interfaces de usuário. Escolher as tecnologias que serão utilizadas.
4. Desenvolvimento do Software - Programação das funcionalidades conforme planejamento, implementando o 
design e a estrutura definidos anteriormente. Código-fonte desenvolvido nas linguagens e tecnologias selecionadas.
5. Testes - Garantir que o programa funcione corretamente e atenda aos requisitos definidos. Realizar testes
por todo programa. Relatórios de testes e correção de eventuais erros ou falhas.
6. Geração do Executável - Transformar o código-fonte em um arquivo executável que possa ser rodado em uma máquina.
7. Documentação do Sistema - Criar documentação que explique o funcionamento do programa, tanto para os usuários 
finais quanto para os desenvolvedores. Manuais de usuário, guias de instalação, documentação do código, notas de 
versão e outros documentos relevantes.
8. Implantação - Distribuir o executável, instalar o sistema nos ambientes de produção, configurar servidores, e
oferecer treinamento aos usuários.
9. Manutenção e Suporte - Correção de bugs, atualizações do sistema, adição de novas funcionalidades com base no
feedback dos usuários.

-------------------------------------------------------------------------------------------

QUESTÃO - 2 - Crie um algoritmo em fluxograma que leia os seguintes dados sobre um trabalhador:
Idade (número inteiro),
Sexo (1 para masculino e 2 para feminino), e
Tempo de serviço (número inteiro).

Depois escreva na tela se ele pode ou não se aposentar dependendo das condições para aposentadoria:

    Ter pelo menos 65 anos e ser do sexo masculino, ou
    Ter pelo menos 57 anos e ser do sexo feminino, ou
    Ter pelo menos 50 anos e ter trabalhado no mínimo por 30 anos, ou
    Ter trabalhado pelo menos 40 anos.

-------------------------------------- EM ANEXO PNG --------------------------------------

-------------------------------------------------------------------------------------------

QUESTÃO - 3 - Transcreva o algoritmo anterior pseudocodigo Portugol (como praticado em aula).

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
        ESCREVA("Voce não esta apto para se aposentar");
    FIMSE
FIMALGORITMO

-------------------------------------------------------------------------------------------

QUESTÃO - 4 - Transcreva o algoritmo anterior para a linguagem C.
Nesta etapa, acrescente a validação dos dados de entrada, como segue:

    Idade não pode ser menor que 0 (zero) nem maior que 120 (cento e vinte).
    Tempo de serviço não pode ser menor que 0 (zero) nem maior que 90 (noventa).
    Sexo não pode ser diferente de 1 ou 2.

Caso os critérios de validação dos dados não sejam atendidos, informar o erro ao usuário e encerrar o programa.
   
   

*/

#include <stdio.h>

int main() {
	int idade, sexo, temp_servico;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	if ((idade < 0 ) || (idade > 120)) {
		printf("Atenção a idade não pode ser: menor que 0  e nem maior que 120!");
		return 0;
	}
	
	printf("Digite 1 para masculino e 2 para feminino: ");
	scanf("%d", &sexo);
	if ((sexo != 1) && (sexo != 2)) {
		printf("Atenção - Sexo nao pode ser diferente de 1 ou 2!");
		return 0;
	}
	
	printf("\nDigite o tempo de serviço: ");
	scanf("%d", & temp_servico);
	if (temp_servico < 0 || temp_servico > 90){
		printf("Atenção - tempo de servico não pode ser: menor que 0 e nem maior que 90! ");
		return 0;
	}
		
	
	if ((idade >= 65) && (sexo == 1) || ( idade >= 57) && ( sexo == 2) || ((idade >= 50) && (temp_servico >= 30)) || (temp_servico >= 40)) {
		printf("\nVocê está apto para se aposentar!");
	} else {
		printf("\nVocê não está apto para se aposentar!");
	}
	
	return 0;
}
