#include <stdio.h>


int main(){

	int arr1[10], arr2[10], arr3[10];

	for(int i = 0; i < 10; i++){

		printf("Digite o %dº valores para os dois vetores: ", i + 1);
		scanf("%d %d", &arr1[i], &arr2[i]);

	}for(int i = 0; i < 10; i ++){

		if(i % 2 == 0){

			arr3[i] = arr1[i];

		}else if(i % 2 != 0){

			arr3[i] = arr2[i];

		}

	}for(int i = 0; i < 10; i++){

		printf("%d ", arr3[i]);

	}

	return 0;

}
