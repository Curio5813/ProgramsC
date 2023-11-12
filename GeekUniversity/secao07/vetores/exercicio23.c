#include <stdio.h>


int main(){

	float v1[5], v2[5], prod = 0;

	for(int i = 0; i < 5; i++){

		printf("Digite o %dº valores de v1 e v2: ", i + 1);
		scanf("%f %f", &v1[i], &v2[i]);

		prod += v1[i] * v2[i];

	}for(int i = 0; i < 5; i++){

		printf("%.2f %.2f\n", v1[i], v2[i]);


	}printf("O produto escalar dos dois conjuntos é: %.2f", prod);

	return 0;

}
