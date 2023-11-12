#include <stdio.h>


int main(){

	int numeros[6];

	for(int i = 0; i < 6; i++){

		printf("Digite o %dº número: ", i + 1);
		scanf("%d", &numeros[i]);

	}for(int i = 0; i < 6; i++){

		printf("%d ", numeros[i]);

	}


}
