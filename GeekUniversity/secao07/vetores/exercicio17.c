#include <stdio.h>


int main(){

	int arr[10];

	for(int i = 0; i < 10; i++){

		printf("Digite o %dº número: ", i + 1);
		scanf("%d", &arr[i]);

		if(arr[i] < 0){

			arr[i] = 0;

		}

	}for(int i = 0; i < 10; i++){

		printf("%d ", arr[i]);

	}

	return 0;

}
