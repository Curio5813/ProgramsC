#include <stdio.h>


int main(){

	int m[4][4], tri[4][4];

	for(int i = 0; i < 4; i++){

		for(int k = 0; k < 4; k++){

			printf("Digite um número para a %dº linha e %dº coluna: ", i + 1, k + 1);
			scanf("%d", &m[i][k]);

			if(k > i){

				tri[i][k] = 0;

			}else{

				tri[i][k] = m[i][k];

			}

		}

	}for(int i = 0; i < 4; i++){

		for(int k = 0; k < 4; k++){

			printf("%2d ", m[i][k]);

		}printf("\n");


	}printf("\n");
	for(int i = 0; i < 4; i++){

		for(int k = 0; k < 4; k++){

			printf("%2d ", tri[i][k]);

		}printf("\n");

	}

	return 0;

}
