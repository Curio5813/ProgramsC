#include <stdio.h>


void multiplicacao_matrizes(){

	int a[3][3], b[3][3], c[3][3], i, k, n1 = 0, n2 = 0;

	for(i = 0; i < 3; i++){
		for(k = 0; k < 3; k++){
			printf("Digite um número para a %dº linha e %dº coluna para Matriz A: ", i + 1, k + 1);
			scanf("%d", &a[i][k]);

		}

	}printf("\n");
	for(i = 0; i < 3; i++){
		for(k = 0; k < 3; k++){
			printf("Digite um número para a %dº linha e %dº coluna para Matriz B: ", i + 1, k + 1);
			scanf("%d", &b[i][k]);

		}

	}printf("\n");
	for(i = 0; i < 3; i++){
		for(k = 0; k < 3; k++){
			printf("%2d ", a[i][k]);

		}printf("\n");

	}printf("\n");
	for(i = 0; i < 3; i++){
		for(k = 0; k < 3; k++){
			printf("%2d ", b[i][k]);

		}printf("\n");

	}printf("\n");
	for(i = 0; i < 3; i++){
		for(k = 0; k < 3; k++){
			c[i][k] = a[i][n1] * b[n2][k] + a[i][n1 + 1] * b[n2 + 1][k] + a[i][n1 + 2] * b[n2 + 2][k];
		}n1 = 0;
		n2 = 0;
		k = 0;

	}printf("\n");
	for(i = 0; i < 3; i++){
		for(k = 0; k < 3; k++){
			printf("%4d ", c[i][k]);

		}printf("\n");
	}

}


int main(){

	multiplicacao_matrizes();

	return 0;

}
