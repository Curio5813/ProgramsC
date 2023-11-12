#include <stdio.h>


int main(){

	int arr[10], maior = 0, menor = 99999;

	for(int i = 0; i < 10; i++){

		printf("Digite o %dº número do vetor: ", i + 1);
		scanf("%d", &arr[i]);

	}for(int i = 0; i < 10; i++){

		if(arr[i] >= maior){

			maior = arr[i];

		}else if(arr[i] < menor){

			menor = arr[i];

		}

	}printf("O maior número é %d e o menor número é %d", maior, menor);

	return 0;

}
