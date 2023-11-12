#include <stdio.h>


int main(){

	int arr[5], maior = 0, menor = 999999999;

	for(int i = 0; i < 5; i++){

		printf("Digite o %dº valor: ", i + 1);
		scanf("%d", &arr[i]);

	}for(int i = 0; i < 5; i++){

		if(arr[i] > maior){

			maior = arr[i];

		}if(arr[i] < menor){

			menor = arr[i];

		}

	}printf("O maior valor é %d e o menor %d", maior, menor);

	return 0;

}
