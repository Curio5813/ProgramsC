#include <stdio.h>


int main(){

	int arr[10];

	for(int i = 0; i < 10; i++){

		printf("Digite o %dº valor: ", i + 1);
		scanf("%d", &arr[i]);

	}for(int i = 0; i < 10; i++){

		for(int k = i + 1; k < 10; k++){

			if(arr[i] == arr[k]){

				printf("%d ", arr[k]);

			}

		}

	}

	return 0;

}
