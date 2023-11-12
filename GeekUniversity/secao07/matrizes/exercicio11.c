#include <stdio.h>


int main(){

	int m[3][3], soma = 0;

	for(int i = 0; i < 3; i++){

		for(int k = 0; k < 3; k++){

			printf("Digite um número para %dº linha e %dº coluna: ", i + 1, k + 1);
			scanf("%d", &m[i][k]);

			if(i + k == 2){

				soma += m[i][k];

			}

		}

	}printf("%d", soma);

	return 0;

}
