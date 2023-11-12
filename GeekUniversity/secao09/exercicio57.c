#include <stdio.h>


void somando_coluna(){

	int a[7][6], n, soma = 0;

	printf("Qual coluna deseja somar da matriz A: ");
	scanf("%d", &n);
	printf("\n");

	for(int i = 0; i < 7; i++){
		for(int k = 0; k < 6; k++){
			printf("Digite um número para a %dº linha e %dº coluna: ", i + 1, k + 1);
			scanf("%d", &a[i][k]);
			if(k == n - 1){
				soma += a[i][k];

			}

		}
	}printf("\n");
	for(int i = 0; i < 7; i++){
		for(int k = 0; k < 6; k++){
			printf("%2d ", a[i][k]);

		}printf("\n");

	}printf("\n");
	printf("A soma da coluna %d é %d", n, soma);

}


int main(){

	somando_coluna();

	return 0;

}
