#include <stdio.h>


int main(){

	int m, i, a = 1, b = 1, n = 1;

	printf("Digite um número inteiro positivo: ");
	scanf("%d", &m);

	for(i = 1; i <= m; i++){

		a = b;
		b = a + n;
		n += 1;

		for(a; a < b; a++){

			printf("%d ", a);

		}printf("\n");

	}

	return 0;

}
