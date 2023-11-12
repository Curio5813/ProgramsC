#include <stdio.h>
#include <math.h>


int main(){

	float pi, r, a, q;

	printf("Qual o valor do raio do círculo? ");
	scanf("%f", &r);


	pi = 3.141592;

	a = pi * r * r;

	printf("O valor da área do círculo é de %f", a);


	return 0;
}
