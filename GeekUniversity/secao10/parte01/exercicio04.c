#include <stdio.h>
#include <stdlib.h>


void passando_valores(int *num1, int *num2, int *aux){

	*(aux) = *(num1);
	*(num1) = *(num2);
	*(num2) = *(aux);

}


int main(){

	int num1, num2, aux;

	printf("Digite um número inteiro: ");
	scanf("%d", &num1);
	printf("Digite outro valor inteiro: ");
	scanf("%d", &num2);
	printf("\n");

	int *p1 = &num1, *p2 = &num2;

	printf("O valor e endereço de memoria do primeiro número é %d %p1\n", num1, p1);
	printf("O valor e endereço de memoria do segundo número é %d %p1\n", num2, p2);
	printf("\n");

	passando_valores(&num1, &num2, &aux);

	printf("O valor e endereço de memoria do primeiro número é agora %d %p1\n", num1, &num1);
	printf("O valor e endereço de memoria do segundo número é agora %d %p1\n", num2, &num2);

	return 0;

}
