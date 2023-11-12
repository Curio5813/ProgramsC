#include <stdio.h>
#include <stdlib.h>


float matriz_enderecos(float *m[3][3]){

	for(int i = 0; i < 3; i++){

		for(int k = 0; k < 3; k++){

			float *pm = &m[i][k];
			printf("O endereço de memória do elemento da linha %d coluna %d é: %pm\n", i, k, pm);

		}

	}

}


int main(){

	float m[3][3] = {{2.3, 2.1, 3.4}, {15.2, 7.1, 6.4}, {9.9, 9.8, 8.7}};

	float *p = &m[3][3];

	printf("O endereço de memória da matriz é %p\n", p);
	printf("\n");

	matriz_enderecos(&m[3][3]);

	return 0;

}
