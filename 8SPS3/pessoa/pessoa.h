#ifndef _PESSOA_H_
#define _PESSOA_H_

#include <string.h>
#include <stdio.h>


struct pessoa {
	char nome[50 + 1];
	int idade;
	char sexo;
	double salario;
};

typedef struct pessoa pessoa;


// Declaração das funções
int inicializaPessoa(struct pessoa *pPessoa, char *pNome, int pIdade, char pSexo, double pSalario);
struct pessoa copiaPessoa(struct pessoa *pPessoa, char *pNome, int pIdade, char pSexo, double pSalario);
void imprimePessoa(const struct pessoa *pPessoa);
void preenchePessoa(pessoa*);
void percorreMatriz(pessoa * m, int tam, void(*f) (pessoa *));
pessoa * buscaMatriz(pessoa * m, int tam, pessoa *alvo, int(*f) (pessoa * alvo, pessoa *corrente));
int procuraPessoaPorIdadeIgual(pessoa * alvo, pessoa * corrente);
int procuraPessoaPorIdadeMenor(pessoa * alvo, pessoa * corrente);





#endif // !_PESSOA_H_

