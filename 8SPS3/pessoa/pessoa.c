#include "pessoa.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Retorna 1 se for ok, ou < 1 se der problema
int inicializaPessoa(struct pessoa *pPessoa, char *pNome, int pIdade, char pSexo, double pSalario) {
	if (strlen(pNome) > 50) {

		return -1;
	}

	strcpy(pPessoa->nome, pNome);
	pPessoa->idade = pIdade;
	pPessoa->sexo = pSexo;
	pPessoa->salario = pSalario;

	return 1;

}


struct pessoa copiaPessoa(struct pessoa *pPessoa, char *pNome, int pIdade, char pSexo, double pSalario) {
	struct pessoa aux;
	strcpy(aux.nome, pPessoa->nome);
	aux.idade = pPessoa->idade;
	aux.sexo = pPessoa->sexo;
	aux.salario = pPessoa->salario;
	return aux;
}



void imprimePessoa(const struct pessoa *pPessoa) {
	printf("%s", pPessoa->nome);
	printf("%i", pPessoa->idade);
	printf("%c", pPessoa->sexo);
	printf("%f", pPessoa->salario);
}


void percorreMatriz(pessoa * m, int tam, void(*f) (pessoa *)) {
	pessoa *end = m + tam;
	for (pessoa *p = m; p != end; ++p) {
		f(p);
	}
}

void preenchePessoa(pessoa* p) {

	char nome[50 + 1];
	int idade;
	char sexo[2];
	double salario;

	printf("Digite o nome da pessoa: \n");
	scanf("%s", &nome);

	printf("Digite o salario da pessoa: \n");
	scanf("%lf", &salario);

	printf("Digite o sexo: \n");
	scanf("%s", sexo);

	printf("Digite a idade: \n");
	scanf("%d", &idade);

	inicializaPessoa(p, nome,idade, sexo[0], salario);
}


int procuraPessoaPorIdadeIgual(pessoa * alvo, pessoa * corrente) {
	return (alvo->idade == corrente->idade);
}

int procuraPessoaPorIdadeMenor(pessoa * alvo, pessoa * corrente) {
	if (alvo->idade < corrente->idade) {
		return 1;
	}
	return 0;
}


pessoa * buscaMatriz(pessoa * m, int tam, pessoa *alvo, int(*f) (pessoa * alvo, pessoa *corrente)) {
	pessoa *end = m + tam;
	for (pessoa *p = m; p != end; ++p) {
		if (f(alvo, p) == 1) {
			return p;
		}
	}
	return NULL;
}