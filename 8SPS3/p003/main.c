#include <string.h>
#include <stdio.h>
#include <stdlib.h>


#define TAM_PESSOA 50
typedef int idade;
typedef double salario;
enum sexo {M,F};

void imprime_pessoa(const struct pessoa*p);
/* Escreva um programa que:
	1 - Crie funções para manipular 'struct pessoa'
	 a - 'inicializa_pessoa'
	 b - 'copia_pessoa' 
	 c - 'imprime_pessoa

	2 - Crie um vetor de 3 'struct pessoa'
	3 - pergunte ao usuario os valores das 3 pessoas
	4 - imprima as 3 pessoas
*/

// Struct define uma sequência de variaveis de tipos diferentes de forma sequencial na memória
struct pessoa {
	char m_nome[TAM_PESSOA +1];
	idade m_idade;
	enum sexo m_sexo;
	salario m_salario;
};

int main() {
	// Serve para construir o struct
	struct pessoa p1;

	// strcpy copia um string para um vetor char[]
	strcpy(p1.m_nome, "Joao da Silva");
	p1.m_idade = 27;
	p1.m_sexo = 'M';
	p1.m_salario = 15500.70;
	imprime_pessoa(&p1);

	// Define um ponteiro (p2) que aponta para a área de memória de p1
	struct pessoa * p2 = NULL;
	p2 = &p1;

	// Para acessar os valores de uma área através de um ponteiro, se utiliza o comando ( -> )
	p2->m_idade = 28;

	return 0;
}

void imprime_pessoa(const struct pessoa*p) {
	printf("Nome = %s, idade = %d, sexo = %c, salario %f\n"
		, p->m_nome
		, p->m_idade
		, p->m_salario
		,(p->m_sexo = M ? "Masculino" : "Feminino"));
}