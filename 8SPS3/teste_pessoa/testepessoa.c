#include "pessoa.h"



int test1() {


	return 1;
}

int test2() {

	return 1;
}


int main() {
	int rc = 1;

	rc = test1();
	if (rc != 1) {
		printf("ERRO test 1 %d:\n", rc);
	}

	rc = test2();
	if (rc != 1) {
		printf("ERRO test 2 %d:\n", rc);
	}
}