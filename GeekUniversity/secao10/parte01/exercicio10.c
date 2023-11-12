#include <stdio.h>
#include <stdlib.h>


int dobro_array(int *v){

	for(int i = 0; i < 5; i++){

		v[i] *= 2;

	}

}


int main(){

	int v[5];

	for(int i = 0; i < 5; i++){

		printf("Digite um inteiro para a posição %d do vetor: ", i);
		scanf("%d", &v[i]);

	}printf("\n");
	for(int i = 0; i < 5; i++){

		int *p = &v[i];
		printf("O endereço de memória do elemento na posição de %2d no array é %p\n", v[i],  p);

	}printf("\n");

	dobro_array(&v);

	for(int i = 0; i < 5; i++){

		int *p = &v[i];
		printf("O endereço de memória do elemento na posição de %2d no array é %p\n", v[i],  p);

	}

	return 0;

}
