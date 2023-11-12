#include <stdio.h>


int main(){

	float c, p;

	printf("Qual o comprimento em centímetros? ");
	scanf("%f", &c);

	p = c / 2.54;

	printf("O comprimento vale em polegadas a %f", p);


	return 0;

}
