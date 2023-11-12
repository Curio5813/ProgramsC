#include <stdio.h>
#include <math.h>


double r, h, v, pi = 3.141592;

double volume_cilindro(){

	printf("Digite o valor do raio e da altura do cilindro: ");
	scanf("%lf%lf", &r, &h);

	v = pi * r * r * h;

	printf("O volume do cilindro é %.2lf", v);

}


int main(){

	volume_cilindro();

	return 0;

}
