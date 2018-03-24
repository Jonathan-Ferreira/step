#include "pessoa.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int tamanho;
	pessoa *vetor = NULL;
	printf("Digite quantas pessoas deseja inserir: \n");
	scanf("%d", &tamanho);
	vetor = (pessoa*)malloc(tamanho * sizeof(pessoa));
	if (vetor == NULL) {
		printf("Erro de alocação!");
		return 1;
	}
	percorreMatriz(vetor, tamanho, preenchePessoa);

	{
		pessoa alvo;
		alvo.idade = 32;
		pessoa * achada = buscaMatriz(vetor, tamanho, &alvo, procuraPessoaPorIdadeIgual);
		if (achada) {
			imprimePessoa(achada);
		}
		else {
			printf("NOT FOUND\n");
		}
	}
	
	{
		pessoa alvo;
		alvo.idade = 32;
		pessoa * achada = buscaMatriz(vetor, tamanho, &alvo, procuraPessoaPorIdadeMenor);
		if (achada) {
			imprimePessoa(achada);
		}
		else {
			printf("NOT FOUND\n");
		}
	}

	return 0;
}
