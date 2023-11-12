#include <stdio.h>


int main(){

	int m[5][5];

	for(int i = 0; i < 5; i++){

		for(int k = 0; k < 5; k++){

			printf("Digite um número para %dº linha e %dº coluna: ", i + 1, k + 1);
			scanf("%d", &m[i][k]);

			if(i == k){

				m[i][k] = 0;

			}

		}

	}for(int i = 0; i < 5; i++){

		for(int k = 0; k < 5; k++){

			printf("%2d ", m[i][k]);

		}printf("\n");

	}

	return 0;

}
