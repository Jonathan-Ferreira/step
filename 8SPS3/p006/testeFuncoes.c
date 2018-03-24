#include <stdio.h>
#include <stdlib.h>
/*	1 - Pergunte o tamanho de um vetor de inteiros
2 - Pergunte o valor de cada inteiro
3 - Imprima o vetor de inteiros */



int main() {
	int tamanho = 0;
	int valor = 0;
	int *vetor = NULL;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	vetor = (int*)malloc(tamanho * sizeof(int));
	if (vetor == NULL) {
		printf("Erro de alocacao!");
		return 1;
	}

	for (int i = 0; i < tamanho; ++i) {
		printf("Digite os valores desejados: ");
		scanf("%d", &valor);
		vetor[i] = valor;
	}

	for (int i = 0; i < tamanho; ++i) {
		printf("O valor da posicao %d eh %d\n", i, vetor[i]);
	}


	return 0;
}

