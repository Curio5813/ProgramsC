#include <stdio.h>
#include <stdlib.h>


int somando_arrays(int *v1, int *v2, int *tam1, int *tam2){

	int v3[*(tam1)];

	if(*(tam1) == *(tam2)){

		for(int i = 0; i < *(tam1); i++){

			v3[i] = v1[i] + v2[i];
			printf("%d ", v3[i]);

		}printf("\n");
		return printf("1");

	}else{

		return printf("0");

	}

}


int main(){

	int tam1 = 10, tam2 = 10;

	printf("Digite o tamanho do vetor v1: ");
	scanf("%d", &tam1);
	printf("Digite o tamanho do vetor v2: ");
	scanf("%d", &tam2);
	printf("\n");

	int v1[tam1], v2[tam2];

	for(int i = 0; i < tam1; i++){

		printf("Digite o %2dº número para o vetor v1: ", i + 1);
		scanf("%d", &v1[i]);

	}printf("\n");
	for(int i = 0; i < tam2; i++){

		printf("Digite o %2dº número para o vetor v2: ", i + 1);
		scanf("%d", &v2[i]);

	}printf("\n");

	somando_arrays(&v1, &v2, &tam1, &tam2);
	printf("\n");

	return 0;

}
