#include <stdio.h>


int main(){

	float k, m;

	printf("Qual a distância em milhas? ");
	scanf("%f", &m);

	k = 1.61 * m;

	printf("A distância em quilômetros é de: %f", k);


	return 0;

}
