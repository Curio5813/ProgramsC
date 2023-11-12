#include <stdio.h>


int main(){

	float h, m;

	printf("Qual a área em hectares? ");
	scanf("%f", &h);

	m = h * 10000;

	printf("A área em m² é de %f", m);


	return 0;
}
