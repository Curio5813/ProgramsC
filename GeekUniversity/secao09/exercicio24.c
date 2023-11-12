#include <stdio.h>


int n, base;


int TriangulosEstrela(){

	printf("Digite um número para o valor da base: ");
	scanf("%d", &n);
	printf("\n");

	for(int i = 1; i <= n; i++){

		base = 2 * i - 1;

		for(int k = 0; k < base; k++){

			printf("*");

		}printf("\n");

	}

}


int main(){

	TriangulosEstrela();

	return 0;

}
