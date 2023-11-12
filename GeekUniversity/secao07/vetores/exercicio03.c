#include <stdio.h>


int main(){

	float v1[11], v2[11];

	for(int i = 0; i < 10; i++){

		printf("Digite o %dº valor: ", i + 1);
		scanf("%f", &v1[i]);

	}for(int k = 0; k < 10; k++){

		v2[k] = v1[k] * v1[k];

	}for(int j = 0; j < 10; j++){

		printf("%.1f\n", v1[j]);
		printf("%.1f\n", v2[j]);

	}

	return 0;

}
