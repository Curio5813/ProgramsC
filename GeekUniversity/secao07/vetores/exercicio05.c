#include <stdio.h>


int main(){

	int arr[10], cont = 0;

	for(int i = 0; i < 10; i++){

		printf("Digite um número para posição %d: ", i + 1);
		scanf("%d", &arr[i]);

	}for(int i = 0; i < 10; i++){

		if(arr[i] % 2 == 0){

			cont += 1;

		}

	}printf("O vetor tem %d números pares.", cont);

	return 0;

}
