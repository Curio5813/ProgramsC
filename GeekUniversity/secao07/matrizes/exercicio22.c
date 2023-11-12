#include <stdio.h>


int main(){

	int a[3][3], b[3][3], c[3][3], n = 0;

	while(n < 2){

		if(n == 0){

			printf("Matriz A:");
			printf("\n");

		}else if(n == 1){

			printf("Matriz B:");
			printf("\n");

		}

		for(int i = 0; i < 3; i++){

			for(int k = 0; k < 3; k++){

				printf("Digite um número para a %dº linha e %dº coluna: ", i + 1, k + 1);

				if(n == 0){

					scanf("%d", &a[i][k]);

				}else if(n == 1){

					scanf("%d", &b[i][k]);

				}

			}

		}n += 1;
		printf("\n");

	}for(int i = 0; i < 3; i++){

		for(int k = 0; k < 3; k++){

			c[i][k] = a[i][k] * b[i][k];

			printf("%3d ", c[i][k]);

		}printf("\n");

	}

	return 0;

}
