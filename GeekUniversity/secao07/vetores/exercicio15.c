#include <stdio.h>


int main(){

	int arr[20];

	for(int i = 0; i < 20; i++){

		printf("Digite o %dº número: ", i + 1);
		scanf("%d", &arr[i]);

	}for(int i = 0; i < 20; i++){

		for(int k = i + 1; k < 20 + 1; k++){

			if(arr[i] == arr[k]){

				break;

			}if(k >= 20){

				printf("%d ", arr[i]);

			}

		}

	}

	return 0;

}
