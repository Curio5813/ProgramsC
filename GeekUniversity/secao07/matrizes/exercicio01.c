#include <stdio.h>


int main(){

	int m[4][4], maior = 0;

	for(int i = 0; i < 4; i++){

		for(int k = 0; k < 4; k++){

			printf("Digite um número para %dº linha e %dº coluna: ", i + 1, k + 1);
			scanf("%d", &m[i][k]);
			if(m[i][k] > 10){

				maior += 1;

			}

		}

	}printf("A matriz tem %d elementos maiores que 10", maior);

	return 0;

}
