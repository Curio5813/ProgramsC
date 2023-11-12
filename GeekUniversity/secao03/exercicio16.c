#include <stdio.h>


int main(){

	float c, p;

	printf("Qual o comprimento em polegadas? ");
	scanf("%f", &p);

	c = p *	2.54;

	printf("O comprimento em centímetros é de %f", c);


	return 0;
}
