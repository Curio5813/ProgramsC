#include <stdio.h>
#include <stdlib.h>


int contador(int *v, int *cont){

	for(int i = 0; i < 10; i++){

		v[i] += *(cont);

	}

}


int main(){

	int v[10], cont = 1;

	for(int i = 0; i < 10; i++){

		printf("Digite o inteiro para a %dº posição do vetor: ", i + 1);
		scanf("%d", &v[i]);

	}

	contador(&v, &cont);
	printf("\n");

	for(int i = 0; i < 10; i++){

		printf("%d ", v[i]);

	}

	return 0;

}
