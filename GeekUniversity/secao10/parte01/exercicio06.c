#include <stdio.h>
#include <stdlib.h>


int dobro_soma(int *num1, int *num2, int p1, int p2){

	int soma;

	*(num1) *= 2;
	*(num2) *= 2;

	soma = *(num1) + *(num2);

	int *p3 = &soma;

	printf("A soma do dobro dos dois número é %d\n", soma);
	printf("O endereço de memória da soma do dobro dos números é %p3\n", p3);
	printf("\n");

}


int main(){

	int num1, num2;

	printf("Digite um número inteiro: ");
	scanf("%d", &num1);
	printf("Digite outro número inteiro: ");
	scanf("%d", &num2);
	printf("\n");

	int *p1 = &num1, *p2 = &num2;

	printf("O endereço de memória do número %d é: %p1\n", num1, p1);
	printf("O endereço de memória do número %d é: %p2\n", num2, p2);
	printf("\n");

	dobro_soma(&num1, &num2, p1, p2);

	printf("O endereço de memória do dobro do número %d é: %p1\n", num1, &num1);
	printf("O endereço de memória do dobro do número %d é: %p2\n", num2, &num2);
	printf("\n");

	return 0;

}


