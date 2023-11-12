#include <stdio.h>


long long int n, soma;


int somatorio(){

	printf("Digite um número inteiro positivo: ");
	scanf("%lld", &n);
	printf("\n");

	for(long long int i = 1; i <= n; i++){

		soma += i;

	}printf("%lld", soma);

}


int main(){

	somatorio();

	return 0;

}
