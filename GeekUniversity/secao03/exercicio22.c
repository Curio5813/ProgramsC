#include <stdio.h>


int main(){

	float j, m;

	printf("Qual o comprimento em jardas? ");
	scanf("%f", &j);

	m = 0.91 * j;

	printf("O comprimento em metros é %f", m);


	return 0;
}
