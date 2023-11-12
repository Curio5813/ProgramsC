#include <stdio.h>


int main(){

	int arr[10], maior = 0, pos;

	for(int i = 0; i < 10; i++){

		printf("Digite o %dº número: ", i + 1);
		scanf("%d", &arr[i]);

	}for(int i = 0; i < 10; i++){

		if(arr[i] > maior){

			maior = arr[i];
			pos = i;

		}

	}printf("O maior número é %d e está na %dº posição do vetor.", maior, pos + 1);

	return 0;

}
