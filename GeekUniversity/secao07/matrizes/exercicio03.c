#include <stdio.h>


int main(){

	int m[4][4];

	for(int i = 0; i < 4; i++){

		for(int k = 0; k < 4; k++){

			printf("Digite um número para %dº linha e %dº coluna: ", i + 1, k + 1);
			scanf("%d", &m[i][k]);

			m[i][k] = m[i][k] * m[i][k];

		}

	}for(int i = 0; i < 4; i++){

		for(int k = 0; k < 4; k++){

			printf("%4d ", m[i][k]);

		}printf("\n");

	}

	return 0;

}
