#include <stdio.h>
#include <stdlib.h>


int min_max(int *vet, int *min, int *max, int *tam){

	for(int i = 0; i < *(tam); i++){

		printf("Qual o %dº elemento do vetor: ", i + 1);
		scanf("%d", &vet[i]);

		if(vet[i] > *(max)){

			*(max) = vet[i];

		}if(vet[i] < *(min)){

			*(min) = vet[i];

		}


	}

}


int main(){

	int tam, vet[tam], min = 99999999, max = 0;

	printf("Qual o tamanho do array: ");
	scanf("%d", &tam);
	printf("\n");

	min_max(&vet, &min, &max, &tam);
	printf("\n");

	printf("O maior elemento é o %d e o menor é o %d", max, min);



}

