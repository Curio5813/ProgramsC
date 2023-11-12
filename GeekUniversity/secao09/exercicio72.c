#include <stdio.h>
#include <stdlib.h>


float soma(float *v1, float *v2){

	float res[4];

	for(int i = 0; i < 4; i++){
		res[i] = v1[i] + v2[i];

	}printf("O vetor soma res é:\n");
	for(int i = 0; i < 4; i++){
		printf("%.1f ", res[i]);

	}

}


int main(){

	float v1[4], v2[4];

	for(int i = 0; i < 4; i++){
		printf("Digite um valor para a posição %d do vetor1: ", i);
		scanf("%f", &v1[i]);

	}printf("\n");
	for(int i = 0; i < 4; i++){
		printf("Digite um valor para a posição %d do vetor2: ", i);
		scanf("%f", &v2[i]);

	}printf("\n");

	soma(v1, v2);

	return 0;

}


