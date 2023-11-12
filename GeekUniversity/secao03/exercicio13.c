#include <stdio.h>


int main(){

	float k, m;

	printf("Qual a distância em quilômetros? ");
	scanf("%f", &k);

	m = k / 1.61;

	printf("A distância em milhas é: %f", m);


	return 0;
}
