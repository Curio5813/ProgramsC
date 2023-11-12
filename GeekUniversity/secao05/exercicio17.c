#include <stdio.h>


int main(){

	int i, n, soma;

	soma = 0;

	printf("Digite um número inteiro positivo: ");
	scanf("%d", &n);

	for(i = 0; i <= n; i++){

		soma += i;

	}printf("%d", soma);

	return 0;

}
