#include <stdio.h>


int main(){

	int arr[6];

	for(int i = 0; i < 6; i++){

		printf("Qual o %dº número par: ", i + 1);
		scanf("%d", &arr[i]);

	}for(int i = 5; i >= 0; i--){

		printf("%d\n", arr[i]);

	}

	return 0;

}
