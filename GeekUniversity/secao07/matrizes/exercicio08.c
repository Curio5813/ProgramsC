#include <stdio.h>


int main(){

	int m[3][3], soma = 0;

	for(int i = 0; i < 3; i++){

		for(int j = 0; j < 3; j++){

			printf("Digite um número para a %dº linha e %dº coluna: ", i + 1, j + 1);
			scanf("%d", &m[i][j]);

			if(j > i){

				soma += m[i][j];

			}

		}

	}printf("%d", soma);

	return 0;

}
