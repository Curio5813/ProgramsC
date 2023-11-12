#include <stdio.h>


int main(){

	double r, r1, r2;

	while(r1 != 0 || r2 != 0){

		printf("Digite um valor para r1 e r2: ");
		scanf("%lf %lf", &r1, &r2);

		if(r1 <= 0 || r2 <= 0){

			break;

		}

		r = (r1 * r2) / (r1 + r2);

		printf("O valor das resistências em paralelo é: %.2lf Ohm.\n", r);
		printf("\n");

	}

	return 0;

}
