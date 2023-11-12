#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void calc_esfera(float r, float *area, float *volume){

	float pi = 3.1415;

	*(area) = 4 * pi * pow(r, 2);
	*(volume) = (4 / 3) * pi * pow(r, 2);

}


int main(){

	float r, area, volume;

	printf("Digite um valor para o tamanho do raio da esfera: ");
	scanf("%f", &r);

	calc_esfera(r, &area, &volume);
	printf("\n");

	printf("A area da esfera é %.2f e seu volume é igual à %.2f", area, volume);

	return 0;

}


