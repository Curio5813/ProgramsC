#include <stdio.h>
#include <stdlib.h>


int maiores_valores(int *num1, int *num2){

	if(*(num1) > *(num2)){

		return printf("O maior número é %d\n", *(num1));

	}if(*(num2) > *(num1)){

		*(num1) = *(num2);

		return printf("O maior número é %d\n", *(num1));

	}

}


int main(){

	int num1, num2;

	printf("Digite um número inteiro: ");
	scanf("%d", &num1);
	printf("Digite outro número inteiro: ");
	scanf("%d", &num2);
	printf("\n");

	int *p1 = &num1, *p2 = &num2;

	printf("O endereço de memória de %d é %p1\n", num1, p1);
	printf("O endereço de memória de %d é %p1\n", num2, p2);
	printf("\n");

	maiores_valores(&num1, &num2);

	printf("O endereço de memória de %d é %p1\n", num1, &num1);

	return 0;

}
