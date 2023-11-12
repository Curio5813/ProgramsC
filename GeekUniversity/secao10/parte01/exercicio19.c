#include <stdio.h>
#include <stdlib.h>


void maior_inteiro(int *v, int *maior, int *cont){


	for(int i = 0; i < 10; i++){

		if(v[i] > *(maior)){

			*(maior) = v[i];
			*(cont) = 1;

		}else if(v[i] == *(maior)){

			*(cont) += 1;

		}

	}

}


int main(){

	int v[10], maior = 0, cont = 0;

	for(int i = 0; i < 10; i++){

		printf("Digite o %dº inteiro para o vetor: ", i + 1);
		scanf("%d", &v[i]);

	}

	maior_inteiro(&v, &maior, &cont);
	printf("\n");

	printf("O maior número do array é %d e apareceu %d vezes", maior, cont);

	return 0;

}
