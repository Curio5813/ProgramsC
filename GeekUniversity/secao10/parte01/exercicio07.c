#include  <stdio.h>
#include <stdlib.h>


int soma_valores(int *a, int *b){

	*(a) += *(b);

}


int main(){

	int a, b;

	printf("Digite um número inteiro: ");
	scanf("%d", &a);
	printf("Digite outro número inteiro: ");
	scanf("%d", &b);
	printf("\n");

	int *p1 = &a, *p2 = &b;

	printf("O endereço de memória do número %d é %p1\n", a, p1);
	printf("O endereço de memória do número %d é %p2\n", b, p2);
	printf("\n");

	soma_valores(&a, &b);

	printf("O endereço de memória do número %d é %p1\n", a, p1);
	printf("O endereço de memória do número %d é %p2\n", b, p2);
	printf("\n");

}

