#include <stdio.h>
#include <stdlib.h>

//methods
double g(int k);
double h(int j);

//typedefs
typedef double(*function)(int);
typedef int idade;

int main() {
	function f = g;
	printf("via g: %lf\n", g(4));
	printf("via f: %lf\n", f(4));
	f = h;
	printf("via h: %lf\n", h(4));
	printf("via f: %lf\n", f(4));
}

double g(int k) {
	return(3.5*k);
}

double h(int j) {
	return(0.5*j);
}