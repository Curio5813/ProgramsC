#include <stdio.h>


int main(){

	double b, h, a;

	printf("Qual a base e altura do triângulo: ");
	scanf("%lf %lf", &b, &h);

	while(h > 0 && b > 0){

		a = (b * h) / 2.0;

		printf("A área do triângulo é de %.2lf\n", a);
		printf("\n");

		printf("Qual a base e altura do triângulo: ");
		scanf("%lf %lf", &b, &h);


	}

	return 0;

}
