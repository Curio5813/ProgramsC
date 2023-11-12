#include <stdio.h>


void diagonal_principal(){

	int v[3][3], soma = 0;

	for(int i = 0; i < 3; i++){
		for(int k = 0; k < 3; k++){
			printf("Digite um número para a %dº linha e %dº coluna: ", i + 1, k + 1);
			scanf("%d", &v[i][k]);
			if(i == k){
				soma += v[i][k];

			}
		}
	}printf("\n");
	for(int i = 0; i < 3; i++){
		for(int k = 0; k < 3; k++){
			printf("%2d ", v[i][k]);

		}printf("\n");

	}printf("\n");
	printf("A soma dos elementos na diagonal principal é %d", soma);

}


int main(){

	diagonal_principal();

	return 0;
}
