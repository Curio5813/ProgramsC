#include <stdio.h>
#include <stdlib.h>


float array_enderecos(float *v, float *p){

	for(int i = 0; i < 10; i++){

		float *pi = &v[i];

		printf("O endereço de memória do vetor na posição %d é %pi\n", i, pi);

	}

}


int main(){

	float v[10] = {4.14, 5.28, 10.9, 2.1, 2.18, 3.14, 2.8, 3.55, 9.01, 10.2};

	float *p = &v, *pz = &v[0];

	printf("O endereço de memória do vetor é: %p\n", p);
	printf("O endereço do memória do vetor na posição zero é: %pz\n", pz);
	printf("\n");

	array_enderecos(&v, p);

	return 0;

}
