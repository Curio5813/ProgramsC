#include <stdio.h>
#include <stdlib.h>


void raizes(float *x1, float *x2){

	float a, b, c, delta;

	printf("Quais os valosres dos coeficientes 'a', 'b', e 'c': ");
	scanf("%f %f %f", &a, &b, &c);
	printf("\n");

	delta = b * b - (4 * a * c);

	if(delta < 0){

		printf("Não existem raízes reais\n");


	}if(delta == 0){

		printf("Existe uma raiz real\n");

		*(x1) = (-b) / (2 * a);

		printf("A raiz é: %.1f", *(x1));

	}if(delta > 0){

		printf("Existem duas raízes reais\n");

		*(x1) = (- b + sqrt(delta)) / (2 * a);
		*(x2) = (- b - sqrt(delta)) / (2 * a);

		printf("As raizes são: %.1f e %.1f", *(x1), *(x2));

	}

}



int main(){

	float x1, x2;

	raizes(&x1, &x2);
	printf("\n");

	return 0;

}
