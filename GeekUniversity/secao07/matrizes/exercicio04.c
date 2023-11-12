#include <stdio.h>


int main(){

	int m[4][4], maior = 0, linha, coluna;

	for(int i = 0; i < 4; i++){

		for(int k = 0; k < 4; k++){

			printf("Digite um número para %dº linha %dº coluna: ", i + 1, k + 1);
			scanf("%d", &m[i][k]);

			if(m[i][k] > maior){

				maior = m[i][k];
				linha = i + 1;
				coluna = k + 1;

			}

		}

	}printf("O maior numero é %d, que está na %dº linha e %dº coluna", maior, linha, coluna);

	return 0;

}
