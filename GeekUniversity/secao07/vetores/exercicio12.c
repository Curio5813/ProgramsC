#include <stdio.h>


int main(){

	int arr[5], maior = 0, menor = 999999999;
	float soma, media;

	for(int i = 0; i < 5; i++){

		printf("Digite o %dº número inteiro: ", i + 1);
		scanf("%d", &arr[i]);

	}for(int i = 0; i < 5; i++){

		soma += arr[i];

		if(arr[i] > maior){

			maior = arr[i];

		}if(arr[i] < menor){

			menor = arr[i];

		}

	}media = soma / 5.0;
	printf("O maior número é %d, o menor número é %d e a média é %.1f", maior, menor, media);

	return 0;

}
