#include <stdio.h>


int main(){

	int a[3][3], b[3][3];

	for(int i = 0; i < 3; i++){

		for(int k = 0; k < 3; k++){

			printf("Digite um número para a %dº linha e %dº coluna: ", i + 1, k + 1);
			scanf("%d", &a[i][k]);

			b[i][k] = a[i][k] * a[i][k];

		}

	}printf("\n");
	for(int i = 0; i < 3; i++){

		for(int k = 0; k < 3; k++){

			printf("%5d", b[i][k]);

		}printf("\n");

	}

	return 0;

}
