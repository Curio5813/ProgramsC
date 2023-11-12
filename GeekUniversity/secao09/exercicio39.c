#include <stdio.h>


void troque(){

	int a, b, aux_a, aux_b;

	printf("Digite um valor para A: ");
	scanf("%d", &a);
	printf("Digite um valor para B: ");
	scanf("%d", &b);
	printf("\n");

	aux_a = b;
	aux_b = a;
	a = aux_a;
	b = aux_b;

	printf("O valor de A é %d, e o valor de B é %d", a, b);

}


int main(){

	troque();

	return 0;

}
