#include <stdio.h>


int main(){

	int arr1[10], arr2[10];

	for(int i = 0; i < 10; i++){

		printf("Digite um número inteiro no intervalo de 0 à 50: ");
		scanf("%d", &arr1[i]);

		if(arr1[i] % 2 != 0){

			arr2[i] = arr1[i];

		}else if(arr1[i] % 2 == 0){

			arr2[i] = 0;

		}

	}for(int i = 0; i < 10; i++){

		printf("%d %d\n", arr1[i], arr2[i]);

	}

	return 0;
}

