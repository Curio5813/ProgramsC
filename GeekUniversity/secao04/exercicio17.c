#include <stdio.h>


int main(){

	float bmenor, bmaior, h, area;

	printf("Digite o valor da base menor: ");
	scanf("%f", &bmenor);
	printf("Digite o valor da base maior: ");
	scanf("%f", &bmaior);
	printf("Digite o valor da altura: ");
	scanf("%f", &h);

	if(bmenor <= 0 || bmaior <= 0 || h <= 0){

		printf("Valores inválidos");

	}else{

		area = ((bmenor + bmaior) * h) / 2;

		printf("A area do trapézio é igual a: %.2f", area);

	}


	return 0;

}
