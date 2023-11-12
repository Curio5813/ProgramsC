#include <stdio.h>


int main(){

	int i, d1, d2;

	for(i = 0; i < 10; i++){

		printf("Lançando os dados! ");
		scanf("%d %d", &d1, &d2);

		if(d1 > d2){

			printf("O resulatdo do dado 1 é maior que do dado 2.\n");

		}else if(d1 < d2){

			printf("O resultado do dado 1 é menor que do dado 2.\n");

		}else if(d1 == d2){

			printf("O resultado do dado 1 é igual ao do dado 2.\n");

		}


	}

	return 0;

}
