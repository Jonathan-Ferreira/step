#include <stdio.h>
#include <stdlib.h>
//Declaração dos métodos

//Método para percorrer o vetor
void percorreMatriz_1(int * const m, int tam, void(*f) (int));

//Percorre passando um target(valor alvo) específico
void percorreMatriz_2(int * const m, int tam, int target, int(*f) (int, int));

//Imprime o vetor
void imprime1(int i);
void imprime2(int i);

//Verificador se o valor passado é par ou ímpar
void verificaPar(int i);

//Mostrar o menor valor do vetor
int menorValor(int i);

void percorreMatriz_2(int * const m, int tam, int target, int(*f) (int, int));

void multiploTarget(int i, int target);

int main() {
	int matriz[] = { -7,13,21,213,2 };
	percorreMatriz_1(matriz, sizeof(matriz) / sizeof(int), imprime1); 
	printf("\n**********************\n");
	percorreMatriz_1(matriz, sizeof(matriz) / sizeof(int), imprime2);
	printf("\n**********************\n");
	percorreMatriz_1(matriz, sizeof(matriz) / sizeof(int), verificaPar);
	printf("\n**********************\n");
	percorreMatriz_1(matriz, sizeof(matriz) / sizeof(int), menorValor);
	printf("\n**********************\n");
	percorreMatriz_2(matriz, sizeof(matriz) / sizeof(int), 3,multiploTarget);
	
	return 0;
}

// Declaração das funções percorreMatriz

void percorreMatriz_1(int * const m, int tam, void(*f) (int)) {
	int*end = m + tam;
	for (int*p = m; p != end; ++p) {
		f(*p);
	}
}

void percorreMatriz_2(int * const m, int tam, int target, int(*f) (int,int)) {
	int*end = m + tam;
	for (int*p = m; p != end; ++p) {
		if (f(*p, target) == 1){
			break;
		}
	}
}

// Declaração das funções de impressão 

void imprime1(int i) {
	printf("%d", i);
}

void imprime2(int i) {
	printf("O valor eh de %d\n", i);
}


// Declaração das funções comparativas
void verificaPar(int i) {
	if (i % 2 == 0) {
		printf("O numero %d e Par\n", i);
	}
	else  {
		printf("O numero %d e Impar\n", i);
	}
}


void multiploTarget(int i, int target) {
	if (i % target == 0) {
		printf("O numero %d e multiplo de %d\n", i, target);
	}
	else {
		printf("O numero %d nao e multiplo de %d\n", i, target);
	}
}


int menorValor(int i){
	static int minimo = 20000;
	if (i < minimo) {
		minimo = i;
	}
	return 1;
}