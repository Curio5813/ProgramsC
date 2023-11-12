#include <stdio.h>


int main(){

	int num, a, b;

	printf("Digite um número inteiro: ");
	scanf("%d", &num);

	a = num - 1;
	b = num + 1;

	printf("O antecessor de %d é %d e seu sucessor é %d.", num, a, b);


	return 0;

}
