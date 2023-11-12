#include <stdio.h>


int main(){

	int m[3][3], t[3][3];

	for(int i = 0; i < 3; i++){

		for(int k = 0; k < 3; k++){

			printf("Digite um número para a %dº linha e %dº coluna:  ", i + 1, k + 1);
			scanf("%d", &m[i][k]);

			t[k][i] = m[i][k];

		}

	}for(int i = 0; i < 3; i++){

		for(int k = 0; k < 3; k++){

			printf("%2d ", t[i][k]);

		}printf("\n");

	}

	return 0;

}
