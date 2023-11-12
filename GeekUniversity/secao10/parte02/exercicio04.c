#include <stdio.h>
#include <stdlib.h>


int main(){

	int i; float r;

	printf("Digite um número inteiro: ");
	scanf("%d", &i);
	printf("Digite um valor real: ");
	scanf("%f", &r);
	printf("\n");

	int *j = &i; float *k = &r;

	printf("O endereço de %d na memória é %p, o valor do ponteiro é %d o endereço do\n"
			"ponteiro é %p e o valor apontado pelo ponteiro é %d.\n", i, j, *(j), &j, *j);
	printf("O ponteiro é uma variável que a aponta para outra variável criada, seu\n"
			"valor é o mesmo da variável apontada, e reservada num espaço de memória.\n");
	printf("\n");
	printf("O endereço de %f na memória é %p, o valor do ponteiro é %f o endereço do\n"
			"ponteiro é %p e o valor apontado pelo ponteiro é %f.\n", r, k, *(k), &k, *k);
	printf("O ponteiro é uma variável que a aponta para outra variável criada, seu\n"
			"valor é o mesmo da variável apontada, e reservada num espaço de memória.\n");
	printf("\n");



	return 0;

}
