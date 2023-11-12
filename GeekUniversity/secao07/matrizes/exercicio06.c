#include <stdio.h>


int main(){

	int m1[4][4], m2[4][4], m3[4][4];

	for(int i = 0; i < 4 ; i++){

		for(int k = 0; k < 4; k++){

			printf("Digite um número para a %dº linha e %dº coluna para a matriz 1: ", i + 1, k + 1);
			scanf("%d", &m1[i][k]);

		}

	}printf("\n");
	for(int i = 0; i < 4 ; i++){

		for(int k = 0; k < 4; k++){

			printf("Digite um número para a %dº linha e %dº coluna para a matriz 2: ", i + 1, k + 1);
			scanf("%d", &m2[i][k]);

		}

	}printf("\n");
	for(int i = 0; i < 4 ; i++){

		for(int k = 0; k < 4; k++){

			if(m1[i][k] >= m2[i][k]){

				m3[i][k] = m1[i][k];

			}else if(m1[i][k] < m2[i][k]){

				m3[i][k] = m2[i][k];

			}
		}

	}for(int i = 0; i < 4; i++){

		for(int k = 0; k < 4; k++){

			printf("%4d ", m3[i][k]);

		}printf("\n");

	}

	return 0;

}

