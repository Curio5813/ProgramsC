#include <stdio.h>



int main(){

	float c, k;

	printf("Qual a temperatura em Kelvin? ");
	scanf("%f", &k);

	c = k - 273.15;

	printf("A temperatura em Celsius é: %f", c);

	return 0;

}

