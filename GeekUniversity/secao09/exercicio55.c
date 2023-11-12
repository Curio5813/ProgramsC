#include <stdio.h>


void soma_diagonais(){

	int a[3][3], soma = 0;

	for(int i = 0; i < 3; i++){

		for(int k = 0; k < 3; k++){
			printf("Digite um número para a %dº linha e %dº coluna: ", i + 1, k + 1);
			scanf("%d", &a[i][k]);
			if(i == k){
				soma += a[i][k];

			}if(i + k == 2){

				soma += a[i][k];

			}

		}

	}printf("\n");
	for(int i = 0; i < 3; i++){

		for(int k = 0; k < 3; k++){
			printf("%2d ", a[i][k]);

		}printf("\n");

	}printf("\n");
	printf("A soma das diagonais da matriz é %d", soma);

}


int main(){

	soma_diagonais();

	return 0;

}
