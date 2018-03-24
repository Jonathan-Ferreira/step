#include <string.h>

// Declaração das funções
int inicializa_pessoa(struct pessoa *pPessoa, char *pNome, int pIdade, char pSexo, double pSalario);
struct pessoa copiaPessoa(struct pessoa *pPessoa, char *pNome, int pIdade, char pSexo, double pSalario);
void imprimePessoa(const struct pessoa *pPessoa);

struct pessoa {
	char nome[50 + 1];
	int idade;
	char sexo;
	double salario;
} ;

typedef struct pessoa pessoa;

int main() {
	pessoa p1;
	int tamanho;
	pessoa *vetor = NULL;
	printf("Digite quantas pessoas deseja inserir: \n");
	scanf("%d", &tamanho);
	vetor = (pessoa*)malloc(tamanho * sizeof(pessoa));


	inicializaPessoa(&p1, "Jonathan", 20, 'M', 2000);
	inicializaPessoa(&p1, "José", 32, 'M', 2763);
	inicializaPessoa(&p1, "Maria", 43, 'M', 6645);
	inicializaPessoa(&p1, "Pedro", 26, 'M', 5846);
	inicializaPessoa(&p1, "Paula", 49, 'M', 1846);
	return 0;
}


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
	printf();
	printf("%s", pPessoa->nome);
	printf("%i", pPessoa->idade);
	printf("%c", pPessoa->sexo);
	printf("%d", pPessoa->salario);
}
