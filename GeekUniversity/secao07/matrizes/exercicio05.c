#include <stdio.h>


int main(){

	int m[5][5], x, lin, col, sim = 0;

	printf("Digite um valor para x: ");
	scanf("%d", &x);

	for(int i = 0; i < 5; i++){

		for(int k = 0; k < 5; k++){

			printf("Digite um valor para %dº linha e %dº coluna: ", i + 1, k + 1);
			scanf("%d", &m[i][k]);

		}

	}for(int i = 0; i < 5; i++){

		for(int k = 0; k < 5; k++){

			if(m[i][k] == x){

				printf("O valor %d está na %dº linha e %dº coluna", x, i + 1, k + 1);
				sim = 1;
				break;

			}

		}

	}if(sim == 0){

		printf("Número não encontrado!");

	}

	return 0;

}
