#include <stdio.h>


int main(){

	float h, m;

	printf("Qual a área em metros²? ");
	scanf("%f", &m);

	h = m * 0.0001;

	printf("A área em hectares é de %f", h);


	return 0;

}
