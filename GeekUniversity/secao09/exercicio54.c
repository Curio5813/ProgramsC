#include <stdio.h>


void soma_dos_elementos(){

	int a[4][4], soma = 0;

	for(int i = 0; i < 4; i++){

		for(int k = 0; k < 4; k++){
			printf("Digite um número para a %dº linha e %dº coluna: ", i + 1, k + 1);
			scanf("%d", &a[i][k]);
			soma += a[i][k];

		}

	}printf("\n");
	for(int i = 0; i < 4; i++){

		for(int k = 0; k < 4; k++){
			printf("%2d ", a[i][k]);

		}printf("\n");

	}printf("\n");
	printf("A soma dos elementos da matriz é %d", soma);

}


int main(){

	soma_dos_elementos();

	return 0;

}
