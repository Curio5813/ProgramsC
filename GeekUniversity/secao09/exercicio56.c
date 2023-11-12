#include <stdio.h>


void somando_linha(){

	int a[7][6], n, soma = 0;

	for(int i = 0; i < 7; i++){
		for(int k = 0; k < 6; k++){
			printf("Digite um número para %dº linha e %dº coluna: ", i + 1, k + 1);
			scanf("%d", &a[i][k]);

		}
	}printf("\n");
	printf("Qual linha deseja somar: ");
	scanf("%d", &n);
	printf("\n");

	for(int i = 0; i < 7; i++){
		for(int k = 0; k < 6; k++){
			printf("%2d ", a[i][k]);
			if(i == n - 1){
				soma += a[i][k];

			}

		}printf("\n");

	}printf("\n");
	printf("A soma da linha %d é %d", n, soma);

}


int main(){

	somando_linha();

	return 0;

}
