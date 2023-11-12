#include <stdio.h>
#include <stdlib.h>


int negativos(float *vet, int *n){

	for(int i = 0; i < 10; i++){

		if(vet[i] < 0){

			*(n) += 1;
		}

	}


}



int main(){

	float vet[10];

	int n = 0;

	for(int i = 0; i < 10; i++){

		printf("Digite o %dº valor do vetor: ", i + 1);
		scanf("%f", &vet[i]);

	}

	negativos(&vet, &n);
	printf("\n");

	printf("O vetor tem %d valores reais negativos", n);

	return 0;

}
