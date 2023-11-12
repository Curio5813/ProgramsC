#include <stdio.h>


void matriz_transposta(){

	int a[3][3], b[3][3];

	for(int i = 0; i < 3; i++){

		for(int k = 0; k < 3; k++){
			printf("digite um número para %dº linha e %dº coluna: ", i + 1, k + 1);
			scanf("%d", &a[i][k]);
			b[i][k] = a[k][i];
		}

	}printf("\n");
	for(int i = 0; i < 3; i ++){

		for(int k = 0; k < 3; k++){
			printf("%2d ", a[i][k]);
			b[i][k] = a[k][i];

		}printf("\n");

	}printf("\n");
	printf("Sua matriz tranposta é:\n");
	for(int i = 0; i < 3; i++){

		for(int k = 0; k < 3; k++){
			printf("%2d ", b[i][k]);

		}printf("\n");

	}

}


int main(){

	matriz_transposta();

	return 0;

}
