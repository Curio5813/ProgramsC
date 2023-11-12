#include <stdio.h>


int main(){

	int m1[3][3], m2[3][3], v[3], soma = 0, somas[3];

	for(int i = 0; i < 3; i++){

		for(int k = 0; k < 3; k++){

			printf("%dº linha %dº coluna: ", i + 1, k + 1);
			scanf("%d", &m1[i][k]);

			m2[k][i] = m1[i][k];

		}

	}for(int i = 0; i < 3; i++){

		for(int k = 0; k < 3; k++){

			soma += m2[i][k];

		}somas[i] = soma;
		soma = 0;

	}for(int i = 0; i < 3; i++){

		printf("%2d ", somas[i]);

	}

	return 0;

}
