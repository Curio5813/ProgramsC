#include <stdio.h>
#include <stdlib.h>


void maior_elemento(int *vet, int *tam, int *maior){

	for(int i = 0; i < *(tam); i++){

		printf("Qual o %dº elemento do array: ", i + 1);
		scanf("%d", &vet[i]);

		if(vet[i] > *(maior)){
			*(maior) = vet[i];

		}

	}

}


int main(){

	int tam, vet[tam], maior = 0;

	printf("Qual o tamanho do vetor: ");
	scanf("%d", &tam);
	printf("\n");

	maior_elemento(&vet, &tam, &maior);
	printf("\n");

	for(int i = 0; i < tam; i++){

		printf("%d\n", vet[i]);


	}printf("\n");
	printf("O maior elemento é %d", maior);

	return 0;

}
