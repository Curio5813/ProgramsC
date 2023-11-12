#include <stdio.h>


int pares(){

	int v[10], n = 0;

	for(int i = 0; i < 10; i++){

		printf("Digite o %dº numero: ", i + 1);
		scanf("%d", &v[i]);

	}for(int i = 0; i < 10; i++){

		if(v[i] % 2 == 0){

			n += 1;
		}

	}printf("\n");
	printf("O vetor tem %d numeros pares", n);

}


int main(){

	pares();

	return 0;

}
