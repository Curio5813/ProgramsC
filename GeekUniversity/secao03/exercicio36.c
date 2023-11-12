#include <stdio.h>


int main(){

	float pi, r, h, v;
	pi = 3.141592;


	printf("Qual o valor da altura do cilindro? ");
	scanf("%f", &h);
	printf("Qual valor do raio da base do cilindro? ");
	scanf("%f", &r);

	v = pi * pow(r, 2) * h;

	printf("O Volume do cilindro é igual a %f", v);


	return 0;

}
